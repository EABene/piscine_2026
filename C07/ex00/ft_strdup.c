/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:44:32 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 18:48:02 by bsandler         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		size;
	char	*dupe;

	size = ft_strlen(src);
	dupe = malloc((size + 1) * sizeof(char));
	if (dupe == 0)
		return (0);
	ft_strcpy(dupe, src);
	return (dupe);
}

/*
int	main(void)
{
	char	*x = "42Vienna";
	char	*y = ft_strdup(x);


	printf("%s\n", y);

	free(y);
	y = NULL;
}
*/
