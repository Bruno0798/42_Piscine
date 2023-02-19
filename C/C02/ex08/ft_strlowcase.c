/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:05:12 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/15 12:23:52 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// int main(int argc, char const *argv[])
// {
//     char teste[] = "djsdsjkhadk   JKHKJH";
//     printf("%s", ft_strlowcase(teste));
//     return(0);
// }