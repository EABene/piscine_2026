/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 11:17:02 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/16 17:42:14 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
#include <stdio.h>

	char	*x;

	x = "This is a test string for testing purposes and it's really long.";
	printf("%d\n", ft_strlen(x));
	return (0);
}
*/
