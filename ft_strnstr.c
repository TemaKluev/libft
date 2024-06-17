/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/17 17:54:54 by artemkliuie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *hs, const char *nd, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (nd[0] == '\0')
		return (hs);
	while (hs[i] != '\0' && i < n)
	{
		j = 0;
		while ((hs[i + j] == nd[j] || nd[j] == '\0') && (i + j <= n))
		{
			if (nd[j] == '\0')
				return ((char*)hs + i);
			j++;
		}
		i++;
	}
	return (NULL);
}