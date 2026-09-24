/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:55:51 by spoernba          #+#    #+#             */
/*   Updated: 2026/09/02 12:18:06 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_obstacle(char **map, int squaresize, int row, int col)
{
	int	i;
	int	j;

	if (row + squaresize - 1 > get_rows(map))
		return (0);
	if (col + squaresize > get_cols(map))
		return (0);
	i = 0;
	while (i < squaresize)
	{
		j = 0;
		while (j < squaresize)
		{
			if (map[row + i][col + j] == get_obstacle(map))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	set_bigsq(int *bigsq, int squaresize, int row, int col)
{
	bigsq[0] = squaresize;
	bigsq[1] = row;
	bigsq[2] = col;
}

int	find_biggest_square(char **map, int *bigsq)
{
	int	row;
	int	col;
	int	squaresize;

	row = 1;
	while (row <= get_rows(map))
	{
		col = 0;
		while (col < get_cols(map))
		{
			squaresize = 1;
			while (check_obstacle(map, squaresize, row, col))
			{
				if (squaresize > bigsq[0])
				{
					set_bigsq(bigsq, squaresize, row, col);
				}
				squaresize++;
			}
			col++;
		}
		row++;
	}
	return (bigsq[0]);
}

void	fill_and_print(char **map, int *bigsq)
{
	int	i;
	int	j;

	i = 0;
	while (i < bigsq[0])
	{
		j = 0;
		while (j < bigsq[0])
		{
			map[bigsq[1] + i][bigsq[2] + j] = get_printer(map);
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= get_rows(map))
	{
		write(1, map[i], ft_strlen(map[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	solve_map(char **map)
{
	int	bigsq[3];

	bigsq[0] = 0;
	bigsq[1] = 0;
	bigsq[2] = 0;
	find_biggest_square(map, bigsq);
	fill_and_print(map, bigsq);
}
