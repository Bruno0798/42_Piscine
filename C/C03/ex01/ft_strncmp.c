/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:18:23 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/02/16 00:19:06 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i=0;

    while(i < n)
    {
        if((s1[i] != '\0') || (s2[i] =! '\0' && s1[i] < s2[i]))
        {
            return (-1);
        } 
        	else
        {
			if(s1[i] == s2[i])
        	{
            	return (0);
        	}
    	}
    }
	return (1);
}

int main(int argc, char const *argv[])
{
	char str1[] = { "olaaaaaaaa" };
	char str2[] = { "olaaaaaaaa" };
	int imprime;
	imprime = ft_strcmp(str1, str2, 10);
	printf("%i", imprime);
	return (0);
}