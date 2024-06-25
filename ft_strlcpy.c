/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:13:40 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		if (i < size)
			dst[i] = '\0';
	}
	printf ("%s\n", dst);
	while (src[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char s1[20];
	char *s2 = "46752379147";

	printf ("%ld\n", ft_strlcpy(s1, s2, 5));
}