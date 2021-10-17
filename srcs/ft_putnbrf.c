/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 22:43:18 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/16 22:43:18 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void    ft_putnbr(long nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);    
}

int ft_putnbrf(va_list argf)
{
    long nb;

    nb = va_arg(argf, long);
    ft_putnbr(nb);
    return (ft_get_declen(argf));    
}