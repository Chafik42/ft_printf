/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:10:12 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 03:05:26 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int		len1;
	int		len2;
	char	str[] = "bonjour";
	char	b = 'a';

    len1 = ft_printf(" LOOOOOOOOOL %c\n", b);
	len2 = printf(" LOOOOOOOOOL %c\n", b);
	printf(" my printf %d OS printf %d\n", len1, len2);
}
