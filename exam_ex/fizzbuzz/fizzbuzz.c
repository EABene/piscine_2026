
#include <unistd.h>

void	bt_putnbr(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		bt_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 7 == 0)
			write(1, "FizzBuzz", 8);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 7 == 0)
			write(1, "Buzz", 4);
		else
			bt_putnbr(i);
		i++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	fizzbuzz();
}
