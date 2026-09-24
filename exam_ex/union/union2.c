// UNION
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	already_printed(char *str, char c, int pos)
{
	pos = pos - 1;
	while (pos >= 0)
	{
		if (c == str[pos])
			return (1);
		pos--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*joined;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}

	joined = malloc(1000);
	if (joined == 0)
		return (0);
	joined[0] = '\0';
	ft_strcat(joined, argv[1]);
	ft_strcat(joined, argv[2]);
//	printf("%s ", joined);
	i = 0;
	while (joined[i] != '\0')
	{
		if (!already_printed(joined, joined[i], i))
			write(1, &joined[i], 1);
		i++;
	}	
	write(1, "\n", 1);
	free(joined);
	return (0);
}


