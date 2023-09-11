/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:08:04 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/15 18:57:11 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = (ft_strlowcase(str));
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
			i++;
		}
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if ((str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
				|| ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122))
				str[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// int main(int argc, char const *argv[])
// {
// 	char teste[] = { "ola, tudo bem? 42palav+ras {cinquenta+e+um" };
// 	printf("%s", ft_strcapitalize(teste));
// 	return 0;
// }