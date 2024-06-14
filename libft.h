/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliuiev <akliuiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:26:19 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/13 20:42:45 by akliuiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isalnum(char c);
int     ft_isascii(char c);
int     ft_isprint(char c);
size_t	ft_strlen(const char *s);

#endif
