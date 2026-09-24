/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:01:37 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/22 12:54:58 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(9, 5));
	printf("%d\n", ft_recursive_power(-9, 5));
 	printf("%d\n", ft_recursive_power(9, -5));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(0, 0));
}
*/
