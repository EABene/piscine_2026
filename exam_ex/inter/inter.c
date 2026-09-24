
#include <unistd.h>

int	in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	already_shown(char c, char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (argv[1][i])	
	{
		if (in_string(argv[1][i], argv[2]) && !already_shown(argv[1][i], argv[1], i))
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
