
#include <unistd.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	putnbr_rec(unsigned int nbr, char *base, int len)
{
	char	temp;

	if (nbr < (unsigned int) len)
	{
		temp = base[nbr];
		write(1, &temp, 1);
	}
	else
	{
		putnbr_rec(nbr / len, base, len);
		temp = base[nbr % len];
		write(1, &temp, 1);
	}
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (base_len(base) < 2)
		return (0);
	// to be finished!!!
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	nbr;
	int				len;

	len = base_len(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = -(unsigned int)nb;
	}
	else
		nbr = nb;
	putnbr_rec(nbr, base, len);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	return (0);
}
