/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:03:57 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/15 22:17:04 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*t;
	size_t	i;

	i = n;
	t = (char *)malloc(n);
	d = (char *)dest;
	s = (char *)src;
	while (n)
	{
		n--;
		t[n] = s[n];
	}
	while (i)
	{
		i--;
		d[i] = t[i];
	}

	int num;

	num = 0;
	while (num < 19){
		printf ("%d", d[num]);
		num++;
	}
	printf ("\n");
	
	return (dest);
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

	ft_memmove(c, "cfsdavfawecfsdbvrtafe", 10);

	i = 0;
	while (i < 19){
		printf ("%d", c[i]);
		i++;
	}
}