
#include <unistd.h>
#include <stdlib.h>

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

int	already_printed(char *str, char c, int pos)
{
	pos = pos - 1;
	while (pos >= 0)
	{
		if (str[pos] == c)
			return (1);
		pos--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	length;
	char *unified;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i] != '\0')
		i++;
	j = 0;
	while (argv[2][j] != '\0')
		j++;
	length = i + j;
	unified = malloc((length + 1) * sizeof(char));
	if (unified == NULL)
		return (0);
	unified[0] = '\0';
	ft_strcat(unified, argv[1]);
	ft_strcat(unified, argv[2]);

	i = 0;
	while (unified[i] != '\0')
	{
		if (!already_printed(unified, unified[i], i))
			write(1, &unified[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
