/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/21 19:08:23 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;

	str = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && j >= i && ft_strchr(set, s1[j]))
		j--;
	str = malloc(sizeof(char) * (j - i));
	if (str = 0)
		return (NULL);
	ft_strlcpy(str, s1[i], j - i + 1);
	return (str);
}
