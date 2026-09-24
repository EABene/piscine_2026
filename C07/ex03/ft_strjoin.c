/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:55:23 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 18:57:16 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	copy_at(char *dest, char *src, int k)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}
	return (k);
}

void	fill_one(char *dest, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		k = copy_at(dest, strs[i], k);
		if (i < size - 1)
			k = copy_at(dest, sep, k);
		i++;
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	int		i;
	char	*joined;

	if (size == 0)
	{
		joined = malloc(1);
		if (joined == 0)
			return (0);
		joined[0] = '\0';
		return (joined);
	}
	total = 0;
	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + (size - 1) * ft_strlen(sep) + 1;
	joined = malloc(total * sizeof(char));
	if (joined == 0)
		return (0);
	fill_one(joined, size, strs, sep);
	return (joined);
}

/*
int	main(void)
{
	char *strings[5] = {"Hello", "beautiful", "world", ",it\'s", "me!"};
	char *joined = ft_strjoin(5, strings, "67");
	printf("%s\n", joined);
	free(joined);

	char *empty = ft_strjoin(0, strings, " _ ");
	printf("%s\n", empty);
	free(empty);
	return (0);
}
*/
