
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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
	int		j;
	char	*unified;

	if (argc != 3)
	{
		write(1, "Provide two inputs.", 19);
		return (1);
	}
	unified = malloc((ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1) * sizeof(char));
	if (unified == NULL)
		return (0);
	unified[0] = '\0';
	ft_strcat(unified, argv[1]);
	ft_strcat(unified, argv[2]);
	
	printf("%s\n", unified);

	i = 0;
	while (unified[i] != '\0')	
	{
		j = i - 1;
		while(unified[j] != unified[i] && j >= 0)
		{
			j--;
		}
		if (j == -1)
			write(1, &unified[i], 1);
		i++;
	}
}
