/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:18:36 by spoernba          #+#    #+#             */
/*   Updated: 2026/09/02 16:05:19 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_three(char *line, int len)
{
	char	a;
	char	b;
	char	c;

	a = line[len - 3];
	b = line[len - 2];
	c = line[len - 1];
	if (a < 32 || a > 126 || b < 32 || b > 126 || c < 32 || c > 126)
		return (0);
	if (a == b || b == c || a == c)
		return (0);
	return (1);
}

int	check_first_line(char *line, int *digit)
{
	int	i;
	int	nbr;
	int	len;

	len = ft_strlen(line);
	if (len < 4)
		return (0);
	if (!check_three(line, len))
		return (0);
	i = 0;
	nbr = 0;
	while (i < len - 3)
	{
		if (line[i] < '0' || line[i] > '9')
			return (0);
		nbr = nbr * 10 + (line[i] - '0');
		i++;
	}
	*digit = nbr;
	return (1);
}

int	check_line_count(int nbr, char **map)
{
	int	i;

	i = 1;
	while (map[i])
		i++;
	if (i - 1 != nbr)
		return (0);
	return (1);
}

int	check_line_content(int nbr, char **map)
{
	int	i;
	int	j;
	int	linelen;

	linelen = ft_strlen(map[1]);
	i = 1;
	while (i <= nbr)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != get_empty(map) && map[i][j] != get_obstacle(map))
				return (0);
			j++;
		}
		if (j != linelen)
			return (0);
		i++;
	}
	return (1);
}

int	map_validator(char **map)
{
	int	nbr;

	if (!map[0])
		return (0);
	if (!check_first_line(map[0], &nbr))
		return (0);
	if (!check_line_count(nbr, map))
		return (0);
	if (!check_line_content(nbr, map))
		return (0);
	return (1);
}
