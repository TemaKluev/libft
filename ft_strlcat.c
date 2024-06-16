/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/16 19:28:06 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
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
	return (i + ft_strlen(str));
}
