/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:36:18 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/15 19:17:55 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cont1;
	int	cont2;

	cont1 = ft_strlen(s1);
	cont2 = ft_strlen(s2);
	if (cont1 < cont2)
	{
		return (-1);
	}
	if (cont1 == cont2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

// int main(int argc, char const *argv[])
// {
// 	char str1[] = { "olaaaaaa" };
// 	char str2[] = { "olaaaaaaa" };
// 	int imprime;
// 	imprime = ft_strcmp(str1, str2);
// 	printf("%i", imprime);
// 	return 0;
// }