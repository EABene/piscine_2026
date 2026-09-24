/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 09:37:10 by spoernba          #+#    #+#             */
/*   Updated: 2026/09/02 12:25:29 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_rows(char **map)
{
	int	i;
	int	rows;

	i = 1;
	while (map[i])
		i++;
	rows = i - 1;
	return (rows);
}

int	get_cols(char**map)
{
	int	cols;

	cols = ft_strlen(map[1]);
	return (cols);
}

char	get_empty(char **map)
{
	int		len;
	char	empty;

	len = ft_strlen(map[0]);
	empty = map[0][len - 3];
	return (empty);
}

char	get_obstacle(char **map)
{
	int		len;
	char	obst;

	len = ft_strlen(map[0]);
	obst = map[0][len - 2];
	return (obst);
}

char	get_printer(char **map)
{
	int		len;
	char	print;

	len = ft_strlen(map[0]);
	print = map[0][len - 1];
	return (print);
}
