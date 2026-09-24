/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 08:57:53 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/21 11:22:02 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char	x[20] = "Hello";
	char	*y = " World";
	char	a[20] = "Hello";
	char	*b = " World";

	ft_strcat(x, y);
	printf("%s ", x);
	strcat(a, b);
	printf("%s ", a);
}
*/
