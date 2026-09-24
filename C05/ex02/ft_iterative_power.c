/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:08:32 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/22 12:00:57 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_save;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_save = nb;
	while (power > 1)
	{
		nb = nb * nb_save;
		power--;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(9, 5));
	printf("%d\n", ft_iterative_power(-9, 5));
	printf("%d\n", ft_iterative_power(9, -5));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(0, 0));
}
*/
