/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_to_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 19:21:32 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 19:57:50 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 4 494 432 234
// 345 345 654
// 64 435 956
// 1 567 653
// 457 457
// 31 674
// 1 256
// 256
// 23
// 7
//
//
//
#include <stdlib.h>
#include <stdio.h>

void	write_number(char *nbr)
{
	int	nb;
	int	temp;

	nb = atoi(nbr);
	if (nb < 10)
	{
		// reference to linked list ones
	}
	else if (nb >= 11 && nb <= 19)
	{
		// reference to linked list teens
	}
	else if (nb >= 20 && nb <= 99)
	{
		temp = nb / 10;
		// reference to linked list tens
		temp = nb % 10;
		// reference to linked list ones
	}
	else if (nb >= 100 && nb <= 999)
	{
		temp = nb / 100 // get one & "100"
		nb = % 100 // pass to functions before
	}
	else if (nb >= 1.000 && nb <= 999.999)
	{
		// split away first three digits
		temp = nb / 1.000 //	-> pass to hundreds function + print thousand

		// split away last three digits
		temp = nb % 1.000 // -> pass to hundreds function
	}
	else if (nb >= 1.000.000 && nb <= 999.999.999


}

int	main(void)
{
	write_number("8");
	write_number("74");
	write_number("814");
	write_number("1903");
	write_number("75921");
	write_number("570274");

}







