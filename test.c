/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:36 by cmarouf           #+#    #+#             */
/*   Updated: 2021/10/18 23:01:38 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/*int main(void)
  {
  int		len1;
  int		len2;

  len1 = ft_printf("%p\n", 0);
  len2 = printf("%p\n", 0);
  printf(" my printf %d OS printf %d\n", len1, len2);
  }*/

int main(void)
{
	int    a = ft_printf("Hello %d, j'imprime %dzune adresse random %p, je fini par un modulo piege %d et un modulo vide %%%", 42, 42);
	printf("\n");
	int    b = printf("Hello %d, j'imprime %dzune adresse random %p, je fini par un modulo piege %d et un modulo vide %%%", 42, 42);
	printf("\n");
	printf("a = %d <<<< b = %d\n", a, b);

}

/*int	main(void)
  {
  int	a = ft_printf("%d qq%", 42);
  printf("\n");
  int	b = printf("%d qq%", 42);
  printf("\n");
  printf("ft_printf = %d <<<<< printf = %d\n", a, b);
  }*/
