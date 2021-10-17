/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:07:02 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/16 23:07:02 by cmarouf          ###   ########.fr       */
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

int ft_putnbr_base16(va_list argf, char *base)
{
    int n;

    n = va_arg(argf, long);
    ft_putnbr_base(n, base);
    return (ft_get_hexlen(argf));
}

