/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:10:52 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

int	words_count(const char *s, int c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			num++;
			while (s[i] != c && (s[i] != '\0'))
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (num);
}

int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

void	free_all(char **str, int i)
{
	while (i >= 0)
	{
		free (str[i]);
		i--;
	}
	free (str);
}

char	**ft_div(const char *s, char c, char **str, int num)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < num)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		str[j] = ft_substr(s, i, word_len(&s[i], c));
		if (str[j] == NULL)
		{
			free_all(str, j);
			return (NULL);
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		num;
	char	**str;

	if (s == NULL)
		return (NULL);
	num = words_count(s, c);
	str = malloc (sizeof(char *) * (num + 1));
	if (str == NULL)
		return (NULL);
	str = ft_div(s, c, str, num);
	return (str);
}

int main(void)
{
    // Test case 1
    const char *str1 = "Hello,,,,,,,world,this,is,a,test";
    char **result1 = ft_split(str1, ',');

    // Print the result of test case 1
    printf("Test case 1:\n");
    for (int i = 0; result1[i] != NULL; i++)
    {
        printf("%s\n", result1[i]);
        free(result1[i]); // Free each substring
    }
    free(result1); // Free the array of pointers
}