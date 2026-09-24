
#include <stdlib.h>
// #include <stdio.h>

char	*str_trunc(char *beg, unsigned int length)
{
	unsigned int	i;
	char			*str;

	str = malloc((length + 1) * sizeof(char));
	if (str == 0)
		return (NULL);

	i = 0;
	while (i < length)
	{
		str[i] = beg[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*y = "abcdefghijklmnopqrstuvwxyz";
	char	*z;

	z = str_trunc(y, 25);

	printf("%s\n", z);
}
*/
