/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:06:19 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/15 16:38:34 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
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
//     char teste[] = "asjk875dhas";
//     char dest[] = "teste";
//     printf("%s", ft_strupcase(teste));
//     return 0;
// }