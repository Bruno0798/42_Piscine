/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:20:21 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:03:44 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 2;
//     b = 4;
//     ft_swap(&a, &b);
//     printf("Valor do a: %d", a);
//     printf("Valor do b: %d", b);
//     return(0);
// }