
#include <stdlib.h>
#include <unistd.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*last_word(char *str)
{
	int		i;
	int		j;
	char	*l_word;
	char	*sep = " \t";

	l_word = malloc(30);

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (is_separator(str[i], sep) && i >= 0)
		i--;
	while (!is_separator(str[i], sep) && i >= 0)
		i--;
	i++;
	j = 0;
	while (!is_separator(str[i], sep))
	{
		l_word[j] = str[i];
		i++;
		j++;
	}
	l_word[j] = '\0';
	return (l_word);
}

int	main(void)
{
	char	*x = "This string will be taken and the last word printed  ";
	char	*y;
	int		i;

	y = last_word(x);

	i = 0;
	while (y[i] != '\0')
	{
		write(1, &y[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
