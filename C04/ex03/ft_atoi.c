/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:57:44 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/21 11:40:25 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count_minus;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str [i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	count_minus = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (count_minus % 2 != 0)
		result = result * -1;
	return (result);
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" ---+-+--+99ab567"));
	printf("%d\n", ft_atoi(" ---+--+673456a7"));
}
*/
