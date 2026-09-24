
#include <unistd.h>

int	already_printed(char *str, char c, int index)
{
	int	i;

	i = index - 1;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}

	i = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j] && !already_printed(argv[1], argv[1][i], i))
			{	
				write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
