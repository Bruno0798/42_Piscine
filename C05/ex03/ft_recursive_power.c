/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:54:06 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/23 18:17:34 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (result = nb * ft_recursive_power(nb, (power - 1)));
	return (result);
}

// int	main(void)
// {
// 	printf("resultado = %d", ft_recursive_power(3, 5));
// 	return (0);
// }
