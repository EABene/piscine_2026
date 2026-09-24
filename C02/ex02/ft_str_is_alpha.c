/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 08:56:51 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/17 14:13:46 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
	printf("Should return 1. Returns %d\n", ft_str_is_alpha("aBzZDeAzg"));
	printf("Should return 0. Returns %d\n", ft_str_is_alpha("aBcDeFZ2"));
	printf("Should return 0. Returns %d\n", ft_str_is_alpha("aBcDe/Fg"));
	printf("Should return 0. Returns %d\n", ft_str_is_alpha("aBcDe'Fg"));
	printf("Should return 1. Returns %d\n", ft_str_is_alpha(""));
}
*/
