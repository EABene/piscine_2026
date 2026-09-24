/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:10:11 by spoernba          #+#    #+#             */
/*   Updated: 2026/09/02 15:24:32 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
void	free_map(char **map);
char	*ft_strjoin_free(char *s1, char *s2);
char	*read_fd(int fd);
char	*read_file(char *filename);
void	do_one_map(char *filename);
int		get_rows(char **map);
int		get_cols(char **map);
char	get_obstacle(char **map);
char	get_printer(char **map);
char	get_empty(char **map);
int		map_validator(char **map);
void	solve_map(char **map);
void	handle_stdin(void);

#endif
