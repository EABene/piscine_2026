/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 10:25:52 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/19 08:48:02 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str) // ascii ranges: 0: 48, 9: 57
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("Should be 0, actually is %d\n", ft_str_is_numeric("823&48"));
	printf("Should be 0, actually is %d\n", ft_str_is_numeric("823A48"));
	printf("Should be 1, actually is %d\n", ft_str_is_numeric(""));
	printf("Should be 0, actually is %d\n", ft_str_is_numeric("2oi1$%&$/"));
	printf("Should be 1, actually is %d\n", ft_str_is_numeric("888833322"));
}
*/
