/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actually_write_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 19:54:52 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 20:24:11 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>
#include <stdio.h>

// 8 473 385
// strlen = 8
// % 3  + 1 = 3
// strlen - 3 = ->

void	ones(char *str)
{
	
}


void	teens(char *str)
{

}

void	hundreds(char *str)
{
	int	nb;

	nb = atoi(str);
	

}



void	write_number(char *str)
{
	int	length;

	length = ft_strlen(str);

	if (length <= 3)
		hundreds(str);
}


int	main(int argc, char **argv)
{
	(void) argc;

	write_number(argv[1]);
}

