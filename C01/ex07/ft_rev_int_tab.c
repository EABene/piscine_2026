/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 12:47:28 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:44:03 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
int	main(void)
{
#include <stdio.h>

	int	i;
	int	size;
	int	my_numbers[5];

	size = 5;
	my_numbers[0] = 20;
	my_numbers[1] = 40;
	my_numbers[2] = 60;
	my_numbers[3] = 80;
	my_numbers[4] = 100;
	i = 0;
	while (i < size)
	{
		printf("%d ", my_numbers[i]);
		i++;
	}
	printf("\n");
	printf("--func here--\n");
	ft_rev_int_tab(my_numbers, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", my_numbers[i]);
		i++;
	}
}
*/
