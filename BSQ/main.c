/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:56:25 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/21 20:11:57 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int size_of_map(void);
int check_width(char *str, char obstacle, char empty);
int check_height(char *str, char obstacle, char empty, int lines);
void verify_square(char *str, int len, int columns, int *arr);
char *print_square(char *str, int start, int lenght);
int whitespaces(char *str, int *ptr_i);
int ft_atoi(char *str);
void check_info(char *str, int *test);


void verify_square(char *str, int len, int columns, int *arr)
{
	int	i;
	int	j;
	int k;
	int flag;

	flag = 1;
	i = 10;
	while (len > 1)
	{
		i = 5;
		while (str[i] != '\0')
		{
			flag = 1;
			j = 0;
			while (j < len && flag)
			{
				k = 0;
				while (k < len && flag)
				{
					if (str[i + (j + columns * k)] != arr[1])
						flag = 0;
					k++;
				}
				j++;
			}
			if (flag == 1)
			{
				arr[0] = i;
				arr[1] = j;
				exit;
			}
			i++;
		}
		len--;
	}
}

char *print_square(char *str, int start, int lenght)
{
	int i;
	int j;
	int k;

	k = 0;
	i = start;
	while (k < lenght)
	{
		j = 0;
		while (j < lenght)
		{
			str[i + k + (28 * j)] = str[3];
			j++;
		}
		k++;
	}
	return(str);
}

int whitespaces(char *str, int *ptr_i)
{
	int count;
	int i;
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
int ft_atoi(char *str)
{
	int sign;
	int result;
	int i;
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
void check_info(char *str, int *test)
{
	int i;
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	test[3] = str[--i];
	test[2] = str[--i];
	test[1] = str[--i];
	test[0] = ft_atoi(str);
}

int size_of_map(void)
{
	int len;
	int fd;
	char    buffer;

	len = 0;
	fd = open("example_file", O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		len++;
	}

	return (len);
}

int check_width(char *str, char obstacle, char empty)
{
	int	i;
	int j;
	int max;

	i = 5;
	max = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\n' && str[i + j] != '\0' && str[i + j] != obstacle)
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

int check_height(char *str, char obstacle, char empty, int lines)
{
	int	i;
	int j;
	int max;
	int test;

	i = 5;
	max = 0;
	while (str[i] != '\0')
	{
		test = 0;
		j = 0;
		while (str[i + j] != '\n' && str[i + j] != '\0' && str[i + j] != obstacle && test < lines)
		{
			j += 28;
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



















int main(void)
{
	int fd;
	int td;
	char *str;
	int len;
	int columns;
	int lines;
	int max;
	int temp[2];
	int arr[4];

	len = size_of_map();
	str = malloc(sizeof(char) * len);
	close(fd);
	fd = open("example_file", O_RDWR);
	read(fd, str, len);
	check_info(str, arr);
	columns = check_width(str, arr[2], arr[1]);
	lines = check_height(str, arr[2], arr[1], arr[0]);
	if (check_width(str, arr[2], arr[1]) > check_height(str, arr[2], arr[1], arr[0]))
		max = check_height(str, arr[2], arr[1], arr[0]);
	else
		max = check_width(str, arr[2], arr[1]);

	verify_square(str, max, 28, temp);

	printf("aquiiiiii %i \n %i \n", temp[0], temp[1]);

	print_square(str, temp[0], temp[1]);



	printf("%s", str);
	printf("columns: %i \n", columns);
	printf("lines: %i \n", lines);
	printf("Start: %i \n", temp[0]);
	printf("Length: %i \n", temp[1]);
	printf("Number: %i \n", arr[0]);
	printf("Empty: %i \n", arr[1]);
	printf("Obstacle: %i \n", arr[2]);
	printf("Fill: %i \n", arr[3]);

	return (0);
}