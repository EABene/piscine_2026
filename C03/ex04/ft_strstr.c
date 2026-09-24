/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 09:23:40 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/29 23:40:18 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0') 
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*x = "tuabcdefghijaklmnopqrstuvwxyz";

	printf("%s ", strstr(x, "tuv"));
	printf("%s ", ft_strstr(x, "tuv"));
	printf("%s ", strstr(x, "not"));
	printf("%s ", ft_strstr(x, "not"));
	printf("%s ", strstr(x, ""));
	printf("%s ", ft_strstr(x, ""));
	printf("%s ", strstr(x, "tuabcdefghijaklmnopqrstuvwxyz"));
	printf("%s ", ft_strstr(x, "tuabcdefghijaklmnopqrstuvwxyz"));
}
*/
