/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler bsandler@student.42vienna.c>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:51:50 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 18:53:13 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

void	fill_array(int *arr, int min, int max)
{
	int	i;
	int	value;

	i = 0;
	value = min;
	while (value < max)
	{
		arr[i] = value;
		i++;
		value++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = malloc(size * sizeof(int));
	if (*range == 0)
		return (-1);
	fill_array(*range, min, max);
	return (size);
}

/*
int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	size = ft_ultimate_range(&tab, 4, 20);
	printf("size: %d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	free(tab);
	return (0);
}
*/
