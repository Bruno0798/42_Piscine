/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:54:13 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/23 18:17:35 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else
	{
		if (index == 1)
			return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// int	main(void)
// {
// 	printf("resultado = %d", ft_fibonacci(11));
// 	return (0);
// }
