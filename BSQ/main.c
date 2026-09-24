/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:53:32 by bsandler          #+#    #+#             */
/*   Updated: 2026/09/02 16:09:00 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 1)
		handle_stdin();
	else
	{
		i = 1;
		while (i < argc)
		{
			do_one_map(argv[i]);
			if (i != (argc -1))
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
