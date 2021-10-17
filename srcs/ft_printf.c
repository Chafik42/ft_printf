/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 03:29:10 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 16:49:07 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_determine_convertion(char const *str, va_list argf, int index)
{
	int	len;

	len = 0;
	if (str[index] == 'c')
		len += ft_putcharf(argf);
	if (str[index] == 's')
		len += ft_putstrf(argf);
	if (str[index] == 'p')
		len += ft_putaddress(argf, 1, "0123456789abcdef");
	if (str[index] == 'd')
		len += ft_putnbrf(argf);
	if (str[index] == 'i')
		len += ft_putnbrf(argf);
	if (str[index] == 'u')
		len += ft_putunbr(argf);
	if (str[index] == 'x')
		len += ft_putnbr_base16(argf, "0123456789abcdef");
	if (str[index] == 'X')
		len += ft_putnbr_base16(argf, "0123456789ABCDEF");
	if (str[index] == '%')
		len += ft_putcentage('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	argf;
	int		i;
	int		len;

	va_start(argf, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_determine_convertion(str, argf, i + 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(argf);
	return (len);
}
