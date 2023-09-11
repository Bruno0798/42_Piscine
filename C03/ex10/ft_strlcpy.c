/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:41:47 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/16 15:53:14 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
		a++;
	if (size < 1)
		return (a);
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (a);
}

// int main(void)
// {
// 	unsigned int x;
// 	x=3;
// 	char dest[] = "Amanha";
// 	char src[] = "Tarde";
// 	printf("%s\n %s\n %i\n", dest, src, x);
// 	ft_strlcpy(dest, src, x);
// 	printf("%s\n", dest);
// 	return (0);
// }