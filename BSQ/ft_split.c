/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler bsandler@student.42vienna.c>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:44:02 by bsandler          #+#    #+#             */
/*   Updated: 2026/09/02 12:27:42 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_separator(char current, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == current)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	word_length(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*copy_word(char *str, int length)
{
	char	*word;
	int		k;

	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	k = 0;
	while (k < length)
	{
		word[k] = str[k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		length;
	char	**stringset;

	stringset = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (stringset == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			length = word_length(str + i, charset);
			stringset[j] = copy_word(str + i, length);
			j++;
			i = i + length;
		}
	}
	stringset[j] = NULL;
	return (stringset);
}
