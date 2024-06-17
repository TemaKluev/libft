/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/17 18:08:55 by artemkliuie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (size > 0)
	{
		while (src[j] != '\0' && (i + j) < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		if (j < size)
			dst[j] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i + ft_strlen(dst));
}
