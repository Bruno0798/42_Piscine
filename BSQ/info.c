/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:25:00 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/21 20:11:55 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int whitespaces(char *str, int *ptr_i)
{
    int count;
    int i;
    i = 0;
    count = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] && (str[i] == 43 || str[i] == 45))
    {
        if (str[i] == 45)
            count *= -1;
        i++;
    }
    *ptr_i = i;
    return (count);
}
int ft_atoi(char *str)
{
    int sign;
    int result;
    int i;
    result = 0;
    sign = whitespaces(str, &i);
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    result *= sign;
    return (result);
}
void check_info(char *str, int *test)
{
    int i;
    i = 0;
    while (str[i] != '\n')
    {
        i++;
    }
    test[3] = str[--i];
    test[2] = str[--i];
    test[1] = str[--i];
    test[0] = ft_atoi(str);
}