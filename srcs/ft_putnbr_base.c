/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 03:22:55 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 03:22:57 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base(long n, char *base)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 16)
		ft_putnbr_base(n / 16, base);
	ft_putchar(base[n % 16]);
}

int	ft_putnbr_base16(va_list argf, char *base)
{
	int	n;

	n = va_arg(argf, long);
	ft_putnbr_base(n, base);
	return (ft_get_hexlen(argf));
}
