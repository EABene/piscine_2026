/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_iterative.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 08:55:01 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/24 08:57:25 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fib;
	int	fib_before;
	int	fib_before_before;

	fib = 0;
	fib_before = 0;
	fib_before_before = 1;
	if (index < 0)
		return (-1);
	while (index > 0)
	{
		fib = fib_before + fib_before_before;
		fib_before_before = fib_before;
		fib_before = fib;
		index--;
	}
	return (fib);
}

/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(11));
	printf("%d\n", ft_fibonacci(20));
	printf("%d\n", ft_fibonacci(30));
}
*/
