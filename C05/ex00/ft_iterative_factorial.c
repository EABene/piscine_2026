/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 10:36:44 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/22 10:46:45 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(9));
}
*/
