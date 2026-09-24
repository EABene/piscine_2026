/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 09:35:37 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/21 11:32:18 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0') // count through dest
	{
		i++;
	}
	j = 0;
	while (j != '\0' && j < size - 1) // count through src
	{
		dest[i] = src [j]; // append src to dest
		i++;
		j++;
	}
	return (i);
}

/*
int	main(void)
{
	char	x[] = "asdfasdf";
	char	*y = "Hello";
	char	a[] = "asdfasdf";
	char	*b = "Hello";

	ft_strlcat(x, y, 6);
	printf("%s ", x);
//	strlcat(a, b, 6);
	printf("%s ", a);
}
*/
