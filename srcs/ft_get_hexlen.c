/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hexalen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:17:02 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 01:17:02 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_get_hexlen(va_list argf)
{
    int     len;
    int     nb;

    nb = va_arg(argf, int);
    len = 0;
    if (nb < 0)
    {
        nb = -nb;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 16;
        len++;
    }
    return (len);
}