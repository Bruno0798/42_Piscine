/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:57:38 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/16 15:47:57 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char teste[] = { "testej  {\t} daklsjd"};
// 	printf("%d", ft_str_is_printable(teste));
// 	return 0;
// }