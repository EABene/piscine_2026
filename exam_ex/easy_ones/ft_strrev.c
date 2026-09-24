
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = 0;
	temp = 'a';
	while (str[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
	return (str);
}

int	main(void)
{
	char str[13] = "Hello World!";

	printf("%s ", ft_strrev(str));
}
