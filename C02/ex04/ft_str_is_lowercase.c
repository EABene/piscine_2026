/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:44:35 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/17 14:11:14 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	printf("Expected: 1, Actual: %d\n", ft_str_is_lowercase("abcdefz"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_lowercase("abAcdefz"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_lowercase("abcd.efz"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_lowercase("abcde*!fz"));
	printf("Expected: 1, Actual: %d\n", ft_str_is_lowercase(""));
}
*/
