#include <unistd.h>

void ft_putnbr(int nb)
{
	char temp;

	if (nb < 10)
	{
		temp = nb + '0';
		write(1, &temp, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		temp = nb % 10 + '0';
		write(1, &temp, 1);
	}
}


void	ft_fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "FizzBuzz", 8);
		else if (i % 4 == 0)
			write(1, "Fizz", 4);
		else if (i % 7 == 0)
			write(1, "Buzz", 4);
		else
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	ft_fizzbuzz();
}
