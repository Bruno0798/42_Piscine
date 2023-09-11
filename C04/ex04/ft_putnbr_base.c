/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:11:11 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/23 00:19:39 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*error = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l_base;
	int		error;
	long	nb;

	l_base = 0;
	error = 0;
	ft_check(base, &error);
	nb = nbr;
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[l_base])
			l_base++;
		if (nb < l_base)
			ft_putchar(base[nb]);
		if (nb >= l_base)
		{
			ft_putnbr_base(nb / l_base, base);
			ft_putnbr_base(nb % l_base, base);
		}
	}
}

// int		main(void)
// {
//     ft_putnbr_base(814, "0123456789ABCDEF");
//     printf("\n");
// }
