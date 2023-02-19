/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:35 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/17 12:51:37 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    if (to_find[0] == '\0')
    {
        return (str);
    }
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            if (to_find[j+1] == '\0')
            {
                return (&str[i]);
            }
        j++;
        }
        i++;
    }
return (0);
}

int main(void)
{
    char s1[] = "ola bom dia";
    char s2[] = "d";
    char *p = ft_strstr(s1, s2);

    printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    return (0);
}