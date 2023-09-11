/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:25:00 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/22 23:35:47 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_size_lenght(char *str, int second_line, int size);

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

void	check_info(char *str, int *test)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	test[3] = str[--i];
	test[2] = str[--i];
	test[1] = str[--i];
	test[0] = ft_atoi(str);
	if (test[1] == test[2] || test[2] == test[3] || test[1] == test[3])
		test[6] = 0;
	i = 1;
	while (i < 4)
	{
		if (test[i] < 32 || test[i] == 127)
			test[6] = 0;
		i++;
	}
}

int	map_width(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = 0;
	i++;
	while (str[i] != '\n')
	{
		j++;
		i++;
	}
	temp = check_size_lenght(str, ++i, ++j);
	if (temp == 0)
		return (0);
	else
		return (j);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n\n\n\n", 4);
}
