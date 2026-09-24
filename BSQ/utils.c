/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:54:41 by bsandler          #+#    #+#             */
/*   Updated: 2026/09/02 16:09:15 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	handle_stdin(void)
{
	char	*buffer;
	char	**map;

	buffer = read_fd(0);
	if (buffer != NULL)
	{
		map = ft_split(buffer, "\n");
		if (!map_validator(map))
		{
			write(1, "map error\n", 10);
			free(buffer);
			free_map(map);
			return ;
		}
		solve_map(map);
		free_map(map);
	}
}
