/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:54:23 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/23 18:17:36 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (1);
	if (nb > 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	printf("raiz qdd = %d", ft_sqrt(-3));
// 	return (0);
// }
