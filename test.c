/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <qatar75020@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:10:12 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/17 15:26:55 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"
int main(void)
{
	int		len1;
	int		len2;

	int	i;
	int *ptr;

	i = 5;
	ptr = &i;
    len1 = ft_printf("%p\n", ptr);
	len2 = printf("%p\n", ptr);
	printf(" my printf %d OS printf %d\n", len1, len2);
}
