/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:20:30 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/27 12:35:00 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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

int	char_counter(char **strs, int size)
{
	int i;  
	int j;
	int total_size;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			total_size++;
		}
		i++;
	}
	return (total_size);
}

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
	return (dest);
}

char	*fill_joined_string(char *dest, char **str, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, str[i]);
		if (i != size - 1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_string_size;
	int	sep_size;
	int string_count;
	char	*joined_string;

	if (size == 0)
		return ("");
	total_string_size = char_counter(strs, size);
	sep_size = ft_strlen(sep);
	printf("sep_size: %d\n", sep_size); //debugging
	string_count = ft_strlen(*strs);
	printf("string_count: %d\n", string_count); // debugging
	joined_string = malloc((total_string_size + (sep_size * string_count - sep_size) + 1) * sizeof(char));
	if (joined_string == 0)
		return (0);	
	joined_string = fill_joined_string(joined_string, strs, sep, size);
	return (joined_string);
}

/*
int	main(void)
{
	int		size;
	char	*joined;
	char	*sep = "()()()()()()()";
	char	*strings[7] = {"Hi", "how", "are", "you", "doing", "my", "friend?"};

	size = 7;
	joined = ft_strjoin(size, strings, sep);
	printf("%s\n", joined);

	free(joined);
}
*/
