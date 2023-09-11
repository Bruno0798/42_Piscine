/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:20:17 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:03:51 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int	val1;
// 	int	val2;
//
// val1 = 15;
// val2 = 10;
//
// ft_div_mod(val1, val2, &val1, &val2);
// printf("Valor de val1: %d", val1);
// 	printf("Valor de val2: %d", val2);
// 	return(0);
// }