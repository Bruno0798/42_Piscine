#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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


