/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:43:12 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 22:00:11 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	num_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*num;

	size = num_size(n);
	num = malloc(sizeof (char) * (size + 1));
	if (num == NULL)
		return (NULL);
	num[size] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	if (n == 0)
		num[0] = 0;
	while (n)
	{
		size--;
		num[size] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}

int main(void)
{
	int i = +41385941;

	printf("%s", ft_itoa(i));
}
