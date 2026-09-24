
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


int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
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
		ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}


