/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:53:44 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/23 18:18:29 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	prod;

	prod = 1;
	i = 0;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			prod = prod * (i + 1);
			i++;
			nb--;
		}
		return (prod);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	printf("result = %d", ft_iterative_factorial(4));
// 	return (0);
// }
