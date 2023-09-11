/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:09:43 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/07 17:46:30 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	print_num(char i, char j, char k)
{
	ft_printchar(i);
	ft_printchar(j);
	ft_printchar(k);
	if (i != '7')
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				print_num(i + '0', j + '0', k + '0');
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main(void){
//     ft_print_comb();
//     return(0);
// }