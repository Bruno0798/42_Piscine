#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int *verify_square(char *str, int len, int columns, int *arr)
{
	int	i;
	int	j;
	int k;
	int flag;

	flag = 1;
	i = 5;
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
					if (str[i + (j + columns * k)] != str[1])
						flag = 0;
					k++;
				}
				j++;
			}
			if (flag == 1)
			{
				arr[0] = i;
				arr[1] = j;
				return (arr);
			}
			i++;
		}
		len--;
	}
	return (0);
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
