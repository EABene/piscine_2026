/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:07:00 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/20 16:48:22 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	x[] = "abcdefghijklmnop";
	char	z[] = "12345667888997663367567457";
	char	a[] = "abcdefghijklmnop";
	char	b[] = "92938458234593948759";

	printf("%s\n", z);
	ft_strcpy(z, x);
	printf("%s\n", z);
	printf("%s\n", b);
	strcpy(b, a);
	printf("%s\n", b);
}
*/
