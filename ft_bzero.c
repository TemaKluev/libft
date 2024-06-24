/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:39:16 by artemkliuie       #+#    #+#             */
/*   Updated: 2024/06/24 22:48:00 by artemkliuie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		n--;
		str[n] = '\0';
	}
	int i;

	i = 0;
	while (i < 19){
		printf ("%c", str[i]);
		i++;
	}
}

int main (void)
{
	char *c = malloc(20); 
	int i = 19;
	while (i)
	{
		i--;
		c[i] = 'a';
	}
	c[19] = '\0';

	printf("1\n");

	ft_bzero(c, 10);
}