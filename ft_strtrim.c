/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:17:05 by akliuiev         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (NULL);
}

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

char	*ft_strtrim(char const *s1, char const *set)
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
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}

int main(void)
{
	char *s1 = "asdgkrtmgnlkdfmdfssssa";
	char *set = "asd";
	printf ("%s\n", ft_strtrim(s1, set));
}