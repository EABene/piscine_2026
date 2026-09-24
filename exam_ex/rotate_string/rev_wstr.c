#include <unistd.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	first;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		first = 1;
		while (i >= 0)
		{
			while (i >= 0 && is_sep(argv[1][i]))
				i--;
			end = i;
			while (i >= 0 && !is_sep(argv[1][i]))
				i--;
			if (end > i)
			{
				if (!first)
					write(1, " ", 1);
				write(1, &argv[1][i + 1], end - i);
				first = 0;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}


