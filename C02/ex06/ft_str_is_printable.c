/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:51:55 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/18 08:47:37 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	printf("Expected: 1, actual: %d\n", ft_str_is_printable("str ing"));
	printf("Expected: 0, actual: %d\n", ft_str_is_printable("azAZ01§$&/"));
	printf("Expected: 1, actual: %d\n", ft_str_is_printable("asdf"));
	printf("Expected: 0, actual: %d\n", ft_str_is_printable("\n\tasdf"));
	printf("Expected: 1, actual: %d\n", ft_str_is_printable(""));
}
*/
