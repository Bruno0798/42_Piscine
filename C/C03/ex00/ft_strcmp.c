/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:36:18 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/21 01:08:02 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(int argc, char const *argv[])
{
	char str1[] = {"olaaaaa"};
	char str2[] = {"olaaaa"};
	int imprime;
	imprime = ft_strcmp(str1, str2);
	printf("%i", imprime);
	return 0;
}*/