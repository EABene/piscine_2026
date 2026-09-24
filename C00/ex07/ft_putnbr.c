/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:54:37 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/20 12:24:04 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_chars(unsigned int num)
{
	char	temp;

	if (num < 10)
	{
		temp = num + '0';
		write(1, &temp, 1);
	}
	else
	{
		print_chars(num / 10);
		temp = (num % 10) + '0';
		write(1, &temp, 1);
	}		
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = (unsigned int) nb * -1;
	}
	else
		num = nb;
	print_chars(num);
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-80);
	write(1, "\n", 1);
}
*/
