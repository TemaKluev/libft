/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:39:16 by artemkliuie       #+#    #+#             */
/*   Updated: 2024/06/15 20:56:12 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		n--;
		str[n] = '\0';
	}
	// int i;

	// i = 0;
	// while (i < 19){
	// 	printf ("%c", str[i]);
	// 	i++;
	// }
}

#include <stdio.h>
#include <stdlib.h>

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