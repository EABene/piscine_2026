/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 09:01:33 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/24 09:07:05 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(50));
	printf("%d\n", ft_find_next_prime(100));
	printf("%d\n", ft_find_next_prime(150));
	printf("%d\n", ft_find_next_prime(200));
	printf("%d\n", ft_find_next_prime(500));
	printf("%d\n", ft_find_next_prime(1000));
}
*/
