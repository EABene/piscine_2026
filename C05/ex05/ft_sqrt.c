/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 08:57:46 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/24 08:58:31 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	factor;
	int	product;

	factor = 0;
	product = 0;
	while (nb > product)
	{
		product = factor * factor;
		if (nb == product)
			return (factor);
		factor++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(225));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-50));
	printf("%d\n", ft_sqrt(250000));
}
*/
