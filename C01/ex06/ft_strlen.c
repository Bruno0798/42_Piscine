/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:03:36 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:04:33 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(int argc, char const *argv[])
// {
//     char text[10] = {'1','2','3','4','5','6','9'};
//     char *str;
//     str = &text[10];
//     int resultado;
//     resultado = ft_strlen(text);
//     printf("Numero de caracteres e: %i", resultado);
//     return 0;
// }
