/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:30:57 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/17 14:09:32 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("Expected: 1, Actual: %d\n", ft_str_is_uppercase("ABCDEFZ"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_uppercase("ABCDaEFZ"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_uppercase("ABCDE.FZ"));
	printf("Expected: 0, Actual: %d\n", ft_str_is_uppercase("ABCDEF/Z"));
	printf("Expected: 1, Actual: %d\n", ft_str_is_uppercase(""));
}
*/
