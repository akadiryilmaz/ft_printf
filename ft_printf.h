/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:34:28 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/03/17 15:34:33 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>
# include	<stdlib.h>

int	ft_printf(const char *xd, ...);

int	ichecker(va_list argp, char c);

int	ft_putstr(char *a);

int	ft_putchar(char a);

int	ft_printpointer(unsigned long int n);

int	base(char *base, int nbr, int n, char c);

#endif
