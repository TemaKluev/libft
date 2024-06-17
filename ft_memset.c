/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:59:56 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/17 10:38:19 by artemkliuie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		n--;
		str[n] = c;
	}

	// int i;

	// i = 0;
	// while (i < 19){
	// 	printf ("%d", str[i]);
	// 	i++;
	// }
	// printf ("\n");
	return (s);
}

int main (void)
{
	char *c = malloc(20); 
	int i = 19;
	while (i)
	{
		i--;
		c[i] = 7;
	}
	c[19] = '\0';

	printf("1\n");

	memset(c, 9, 10);

	i = 0;
	while (i < 19){
		printf ("%d", c[i]);
		i++;
	}
}