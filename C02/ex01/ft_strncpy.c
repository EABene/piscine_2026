/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:01:13 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/20 12:02:27 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[5];
	int	i;

	ft_strncpy(dest, "abcdef", 8);
	i = 0;
	while (i < 5)
	{	
		if (dest[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", dest[i]);
		i++;
	}
}
*/
