/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:10:12 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 03:50:54 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int		len1;
	int		len2;

	int	i = -2147483648;
    len1 = ft_printf(" LOOOOOOOOOL %i\n", i);
	len2 = printf(" LOOOOOOOOOL %i\n", i);
	printf(" my printf %d OS printf %d\n", len1, len2);
}
