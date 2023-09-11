/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:03:27 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/07 14:59:26 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int numero)
{
	char	letra;

	if (numero >= 0)
	{
		letra = 'P';
		ft_putchar(letra);
	}
	else
	{
		letra = 'N';
		ft_putchar(letra);
	}
}

// int main(void){

//     int num1;
//     int num2;

//     num1 = 3;
//     num2 = -5;

//     ft_is_negative(num1);
//     ft_is_negative(num2);
//     return(0);
// }