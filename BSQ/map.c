/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:41:06 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/22 19:18:52 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	size_of_map(char *map)
{
	int		len;
	int		fd;
	char	buffer;

	len = 0;
	fd = open(map, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, &buffer, 1))
		{
			len++;
		}
		close(fd);
		return (len);
	}
	return (0);
}

int	check_width(char *str, char obstacle)
{
	int	i;
	int	j;
	int	max;

	i = 5;
	max = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] != obstacle)
		{
			j++;
		}
		if ((j) > max)
		{
			max = j;
		}
		i++;
	}
	return (max);
}

int	check_height(char *str, int *arr, int width)
{
	int	i;
	int	j;
	int	max;
	int	test;

	i = 5;
	max = 0;
	while (str[i] != '\0')
	{
		test = 0;
		j = 0;
		while (str[i + j] != '\n' && str[i + j] != arr[2] && test < width)
		{
			j += width;
			test++;
		}
		if ((test) > max)
		{
			max = test;
		}
		i++;
	}
	return (max);
}

void	map(char *str, int len, char *map)
{
	int	fd;
	int	i;

	fd = open(map, O_RDWR);
	read(fd, str, len);
	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = '\0';
	close(fd);
}

int	max_size(char *str, int *arr, int width)
{
	int	max;
	int	line;
	int	column;

	line = check_width(str, arr[2]);
	column = check_height(str, arr, width);
	if (line > column)
		max = column;
	else
		max = line;
	return (max);
}
