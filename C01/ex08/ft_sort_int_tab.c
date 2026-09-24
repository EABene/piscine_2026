/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:16:26 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:45:29 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
#include <stdio.h>

	int	size;
	int	numbers[6];
	int	i;

	size = 6;
	numbers[0] = 2;
	numbers[1] = 12;
	numbers[2] = 10;
	numbers[3] = 8;
	numbers[4] = 5;
	numbers[5] = 3;
	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n---func call---\n");
	ft_sort_int_tab(numbers, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
}
*/
