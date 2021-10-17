/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:12:30 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 02:06:36 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define    FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_putaddress(va_list argf, int k);
int ft_putcentage(char c);
int ft_putunbr(va_list argf);
int ft_putnbr_base16(va_list argf, char *base);
int ft_putnbrf(va_list argf);
int ft_get_declen(va_list argf);
int ft_get_hexlen(va_list argf);
int ft_putstrf(va_list argf);
int ft_putcharf(va_list argf);

void    ft_putchar(char c);
#endif