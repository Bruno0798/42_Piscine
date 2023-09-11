/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:45:01 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/22 23:37:17 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		size_of_map(char *map);
int		check_width(char *str, char obstacle);
int		check_height(char *str, int *arr, int width);
void	verify_square(char *str, int len, int columns, int *arr);
char	*print_square(char *str, int *arr, int width);
int		whitespaces(char *str, int *ptr_i);
int		ft_atoi(char *str);
void	check_info(char *str, int *test);
void	map(char *str, int len, char *map);
int		max_size(char *str, int *arr, int width);
int		map_width(char *str);
void	print(char *str);
void	rev_arg(char **maps, int size);
int		check_size_lenght(char *str, int second_line, int size);

void	run_code(int argc, char **argv)
{
	char	*str;
	int		len;
	int		max;
	int		arr[7];

	len = size_of_map(argv[argc]);
	if (len != 0)
	{
		str = malloc(sizeof(char) * len);
		map(str, len, argv[argc]);
		check_info(str, arr);
		if (map_width(str) == 0 || arr[6] == 0)
		{
			write(1, "map error\n", 10);
			return ;
		}
		max = max_size(str, arr, map_width(str));
		verify_square(str, max, map_width(str), arr);
		if (arr[4] == 0)
			return ;
		print_square(str, arr, map_width(str));
		print(str);
	}
	else
		write(1, "map error\n", 10);
}

void	run_default(char *file)
{
	char	*str;
	int		len;
	int		max;
	int		arr[7];

	len = size_of_map(file);
	if (len != 0)
	{
		str = malloc(sizeof(char) * len);
		map(str, len, file);
		check_info(str, arr);
		if (map_width(str) == 0 || arr[6] == 0)
		{
			write(1, "map error\n", 10);
			return ;
		}
		max = max_size(str, arr, map_width(str));
		verify_square(str, max, map_width(str), arr);
		if (arr[4] == 0)
			return ;
		print_square(str, arr, map_width(str));
		print(str);
	}
	else
		write(1, "map error\n", 10);
}

int	check_size_lenght(char *str, int second_line, int size)
{
	int	i;
	int	j;

	i = second_line;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\n')
		{
			i++;
			j++;
		}
		if (++j != size)
		{
			return (0);
		}
		i++;
	}
	return (size);
}
