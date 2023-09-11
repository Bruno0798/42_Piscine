/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:44:09 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/07 17:46:54 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	dig(int n)
{
	if (n < 10)
	{
		ft_printchar('0');
		ft_printchar(n + '0');
	}
	else
	{
		ft_printchar(n / 10 + '0');
		ft_printchar(n % 10 + '0');
	}
}

void	print_num(int num1, int num2)
{
	dig(num1);
	ft_printchar(' ');
	dig(num2);
	if (num1 != 98)
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != j)
			{
				print_num(i, j);
			}
			j++;
		}
		i++;
	}
}

// int main(void){
//     ft_print_comb2();
//     return(0);
// }