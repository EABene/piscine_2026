#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_under_100(int n, char **ones, char **teens, char **tens)
{
	int	ten;
	int	one;

	if (n < 10)
	{
		ft_putstr(ones[n]);
		return ;
	}
	if (n < 20)
	{
		ft_putstr(teens[n - 10]);
		return ;
	}
	ten = n / 10;
	one = n % 10;
	ft_putstr(tens[ten]);
	if (one != 0)
	{
		ft_putstr(" ");
		ft_putstr(ones[one]);
	}
}

void	print_under_1000(int n, char **ones, char **teens, char **tens)
{
	int	hundred;
	int	rest;

	hundred = n / 100;
	rest = n % 100;
	if (hundred != 0)
	{
		ft_putstr(ones[hundred]);
		ft_putstr(" hundred");
	}
	if (hundred != 0 && rest != 0)
		ft_putstr(" ");
	if (rest != 0)
		print_under_100(rest, ones, teens, tens);
}

int	main(void)
{
	char	*ones[] = {"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine"};
	char	*teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
		"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char	*tens[] = {"", "", "twenty", "thirty", "forty",
		"fifty", "sixty", "seventy", "eighty", "ninety"};

	print_under_1000(342, ones, teens, tens);
	write(1, "\n", 1);
	print_under_1000(42, ones, teens, tens);
	write(1, "\n", 1);
	print_under_1000(100, ones, teens, tens);
	write(1, "\n", 1);
	print_under_1000(7, ones, teens, tens);
	write(1, "\n", 1);
	print_under_1000(13, ones, teens, tens);
	write(1, "\n", 1);
	print_under_1000(20, ones, teens, tens);
	write(1, "\n", 1);
	return (0);
}
