/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:39:07 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 00:00:09 by artemkliuie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!src && !dest)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	while (n)
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *src = "HELLLO";
	char *dst;

	dst = malloc(sizeof(char) * 10);
	printf("%s\t%s\n", src, dst);
	ft_memcpy(dst, src, 6);
	printf("%s\t%s\n", src, dst);

	return (0);
}