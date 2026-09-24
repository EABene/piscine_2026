/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:48:49 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 18:50:33 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*fill_array(int *arr, int min, int max)
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
	return (arr);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (arr == 0)
		return (NULL);
	fill_array(arr, min, max);
	return (arr);
}

/*
int	main(void)
{
	int	*x;
	int	i;
	int	size = 20;

	x = ft_range(4, 24);
	i = 0;
	while (i < size)	// Printing out the array
	{
		printf("%d ", x[i]);
		i++;
	}
	free(x);	// free for malloc in function call
}
*/
