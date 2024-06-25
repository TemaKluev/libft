/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 19:17:58 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, (s + i));
		i++;
	}
}

#include <ctype.h>
#include <stdio.h>

void	ft_upper_case(unsigned int i, char *str)
{
	i = 4;
	*str = toupper(*str);
}

int main(void)
{
	char str[] = "hello";

	printf("%s\n", str);
	ft_striteri(str, ft_upper_case);
	printf("%s\n", str);

	return (0);
}