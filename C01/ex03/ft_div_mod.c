/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 10:18:05 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:38:18 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
#include <stdio.h>

	int	a;
	int	b;
	int	div;
	int	mod;

	a = 27;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
	return (0);
}
*/
