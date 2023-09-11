/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:43:57 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/22 23:31:39 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	conditions(char *str, int *temp, int i, int *arr)
{
	int	j;
	int	k;

	j = 0;
	while (j < temp[0])
	{
		k = 0;
		while (k < temp[0])
		{
			if (str[i + (j + temp[1] * k)] != arr[1])
				return (0);
			k++;
		}
		j++;
	}
	arr[4] = i;
	arr[5] = j;
	return (1);
}

void	verify_square(char *str, int len, int columns, int *arr)
{
	int	i;
	int	temp[2];

	while (len > 1)
	{
		i = 6;
		while (str[i] != '\0')
		{
			temp[0] = len;
			temp[1] = columns;
			if (conditions(str, temp, i, arr) == 1)
				return ;
			i++;
		}
		len--;
	}
	arr[4] = 0;
}

char	*print_square(char *str, int *arr, int width)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = arr[4];
	while (k < arr[5])
	{
		j = 0;
		while (j < arr[5])
		{
			str[i + k + (width * j)] = arr[3];
			j++;
		}
		k++;
	}
	return (str);
}

void	rev_arg(char **maps, int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	j = size - 1;
	while (i <= size / 2)
	{
		aux = maps[i];
		maps[i] = maps[j];
		maps[j] = aux;
		i++;
		j--;
	}
}
