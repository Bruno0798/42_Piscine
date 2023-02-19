/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:39:10 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 14:57:26 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

// int main(int argc, char const* argv[])
// {
// 	int dados[10] = { 1,4,7,4,8,6,3,4,5,7 };
// 	int tamanho;
// 	tamanho = 10;
// 	int i = 0;
//
// 	ft_rev_int_tab(dados, tamanho);
// 	while (dados[i] < 10)
// 	{
// 		printf("%i", dados[i]);
// 		i++;
// 	}
// 	return 0;
// }