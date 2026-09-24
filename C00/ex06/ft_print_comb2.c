/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:43:50 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/20 12:04:59 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int a, int b, int c, int d)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = a + '0';
	c2 = b + '0';
	c3 = c + '0';
	c4 = d + '0';

	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
		write(1, ", ", 2);
//	else
//		write(1, "\n", 1);
}

void	second_loop(int a, int b)
{
	int	c;
	int	d;

	c = 0;
	while (c <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (a * 10 + b < c * 10 + d)
				write_comb(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	
	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			second_loop(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
