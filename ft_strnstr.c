/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:16:26 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *hs, const char *nd, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (nd[0] == '\0')
		return ((char *)hs);
	while (hs[i] != '\0' && i < n)
	{
		j = 0;
		while ((hs[i + j] == nd[j] || nd[j] == '\0') && (i + j <= n))
		{
			if (nd[j] == '\0')
				return ((char *)hs + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	const char str[20] = "hello everyone\n";
	const char *small_str = "everyone";
	char *ptr = ft_strnstr(str, small_str, sizeof(str));
	printf("%s", ptr);
	return (0);
}