
#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		ft_putchar("\n");
	}
	i = 0;
	j = 0;
	while (argv[2][i] != '\0')
	{
		if (argv[1][j] == argv[2][i])
			j++;
		i++;
	}
	if (argv[1][j] == '\0')
	{
		ft_putchar(argv[1]);
		ft_putchar("\n");
	}

	else
		ft_putchar("\n");
}
