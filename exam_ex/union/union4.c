
#include <unistd.h>


int	already_printed(char *str, char c, int index)
{
	int	i;

	i = index - 1;
	while (i >= 0)
	{
		if (c == str[i])
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int		i;
	char	x[100];
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}

	i = 0;
	x[0] = '\0';

	ft_strcat(x, argv[1]);
	ft_strcat(x, argv[2]);

	i = 0;
	while (x[i] != '\0')
	{
		if (!already_printed(x, x[i], i))
			write(1, & x[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

