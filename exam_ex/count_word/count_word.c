
#include <stdio.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t');
}


int	count_word(char *str)
{
	int	i;
	int	word_count;
	int	in_word;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (!is_sep(str[i]))
			word_count++;
		while (is_sep(str[i]) && str[i] != '\0')
			i++;
		while (!is_sep(str[i]) && str[i] != '\0')
		{
			if (is_sep(str[i-1]) && (!is_sep(str[i])))
				word_count++;
			i++;
		}
	}
	return (word_count);
}

int	main(void)
{
	char *x = " This is a string, in which the words will be counted.    ";
	char *y = " ";
	char *z = " Normal s enten ce    man.  ";
	printf("%d\n", count_word(x));
	printf("%d\n", count_word(y));
	printf("%d\n", count_word(z));

}
