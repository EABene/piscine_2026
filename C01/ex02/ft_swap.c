/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 10:35:41 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:37:45 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
#include <stdio.h>

	int	x;
	int	y;

	x = 5;
	y = 3;
	printf("x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
}
*/
