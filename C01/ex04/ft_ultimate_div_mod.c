/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 10:51:07 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:39:03 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
#include <stdio.h>

	int	x;
	int	y;

	x = 89;
	y = 5;
	printf("x = %d, y = %d\n", x, y);
	printf("---Function call---\n");
	ft_ultimate_div_mod(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return (0);
}
*/
