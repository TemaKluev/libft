/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:13:10 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (size > 0)
	{
		while (src[j] != '\0' && (i + j) < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i < size)
			dst[j + i] = '\0';
	}
	return (i + ft_strlen(src));
}

int main(void)
{
	char s1[20] = "afwerfasd";
	char *s2 = "46752379147";

	printf ("%ld\n", ft_strlcat(s1, s2, 17));
}