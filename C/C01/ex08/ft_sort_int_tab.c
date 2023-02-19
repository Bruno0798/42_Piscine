/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:28:41 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 14:58:09 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}

// int main(int argc, char const *argv[])
// {
// 	int dados[10] = { 1,5,9,3,7,4,6,8,0,1 };
// 	int tamanho = 10;
// 	int i = 0;
//
// 	ft_sort_int_tab(dados, tamanho);
// 	while (dados[i] < 10)
// 	{
// 		printf("%i", dados[i]);
// 		i++;
// 	}
// 	return 0;
// }
