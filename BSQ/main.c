/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:56:25 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/22 19:12:46 by bsousa-d         ###   ########.fr       */
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
void	run_code(int argc, char **argv);
void	run_default(char *file);

int	main(int argc, char **argv)
{
	rev_arg(argv, argc);
	if (argc != 1)
	{
		while (argc-- > 1)
			run_code(argc, argv);
	}
	else
	{
		run_default("example_file");
	}
	return (0);
}
