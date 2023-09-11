/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:43:39 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/07 14:58:47 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num)
{
	write(1, &num, 1);
}

void	ft_print_numbers(void)
{
	int	numero;

	numero = '0';
	while (numero <= '9')
	{
		ft_putchar(numero);
		numero ++;
	}
}

// int main(void){
//     ft_print_numbers();
//     return(0);
// }