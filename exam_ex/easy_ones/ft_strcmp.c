
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d\n", ft_strcmp("Hallo", "Hallo"));
	printf("%d\n", ft_strcmp("Halllo", "Hallo"));
	printf("%d\n", ft_strcmp("Hallo", "Haallo"));
	printf("%d\n", ft_strcmp("Hallox", "Hallo"));
	printf("%d\n", ft_strcmp("Hallo", ""));
	printf("%d\n", ft_strcmp("", "Hallo"));
}
