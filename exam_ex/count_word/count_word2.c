
#include <stdio.h>

int	is_separator(char cur, char *seplist)
{
	int	i;

	i = 0;
	while (seplist[i] != '\0')
	{
		if (cur == seplist[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (is_separator(str[i], sep) == 1)
			i++;
		if (str[i] != '\0')
			cnt++;
		while (is_separator(str[i], sep) == 0 && str[i] != '\0')
			i++;
	}
	return (cnt);
}

int	main(void)
{
	char	*x = "These;.   words .. , will be      counted.";
	char	*y = "Also,this,will,be;;  ,counted,with..,another,separator.";
	char	*separators = ".,; ";

	printf("%d\n", word_count(x, separators));
	printf("%d\n", word_count(y, separators));
}
