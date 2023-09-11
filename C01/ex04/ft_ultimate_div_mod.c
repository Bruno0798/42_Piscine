/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:42:39 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:03:54 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;
	int	aux2;

	aux = *a / *b;
	aux2 = *a % *b;
	*a = aux;
	*b = aux2;
}

// int main(int argc, char const* argv[])
// {
// 	int val1;
// 	int val2;
//
// 	val1 = 15;
// 	val2 = 4;
//
// 	ft_ultimate_div_mod(&val1, &val2);
// 	printf("Valor de a: %d \n", val1);
// 	printf("Valor de b: %d", val2);
// 	return 0;
// }