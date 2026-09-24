/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 09:00:20 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/21 11:29:28 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	x[20] = "asdf";
	char	*y = "Hello my guy";
	char	a[20] = "asdf";
	char	*b = "Hello my guy";

	ft_strncat(x, y, 7);
	printf("%s ", x);
	strncat(a, b, 7);
	printf("%s ", a);
}
*/
