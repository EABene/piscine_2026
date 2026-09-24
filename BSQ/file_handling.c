/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:53:32 by bsandler          #+#    #+#             */
/*   Updated: 2026/09/02 12:24:44 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;

	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (joined == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	free(s1);
	return (joined);
}

char	*read_fd(int fd)
{
	char	temp[1000];
	char	*buffer;
	int		bytes;

	buffer = malloc(1);
	if (buffer == NULL)
		return (NULL);
	buffer[0] = '\0';
	bytes = read(fd, temp, 999);
	while (bytes > 0)
	{
		temp[bytes] = '\0';
		buffer = ft_strjoin_free(buffer, temp);
		bytes = read(fd, temp, 999);
	}
	return (buffer);
}

char	*read_file(char *filename)
{
	int		fd;
	char	*buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = read_fd(fd);
	close(fd);
	return (buffer);
}

void	do_one_map(char *filename)
{
	char	*buffer;
	char	**map;

	buffer = read_file(filename);
	if (buffer == NULL)
		return ;
	map = ft_split(buffer, "\n");
	free(buffer);
	if (map == NULL)
		return ;
	if (!map_validator(map))
	{
		write(1, "map error\n", 10);
		free_map(map);
		return ;
	}
	solve_map(map);
	free_map(map);
}
