/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:59:56 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:05:48 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		n--;
		str[n] = c;
	}
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

	ft_memset(c, 99, 10);

	i = 0;
	while (i < 19){
		printf ("%c", c[i]);
		i++;
	}
}