/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:59:56 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/25 23:40:09 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main (void)
{
	char c = '0';

	if (ft_isprint(c))
		printf ("yes\n");
	else
		printf ("no\n");
}