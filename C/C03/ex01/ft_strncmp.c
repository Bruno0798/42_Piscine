/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:18:23 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/21 01:08:22 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(int argc, char const *argv[])
{
	char str1[] = {"olaaaaaaaaldsajd"};
	char str2[] = {"olaaaaaaaasalkd"};
	int imprime;
	imprime = ft_strncmp(str1, str2, 10);
	printf("%i", imprime);
	return (0);
}*/