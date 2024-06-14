/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artemkliuiev <artemkliuiev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:26:19 by akliuiev          #+#    #+#             */
/*   Updated: 2024/06/14 22:31:25 by artemkliuie      ###   ########.fr       */
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
void    ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);

#endif
