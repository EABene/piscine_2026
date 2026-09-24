// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int in_word;

	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (in_word == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str [i] - 32;
				in_word = 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
			in_word = 0;
		i++;
	}
	return(str);
}
/*
int	main(void)
{
	char	x[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	y[] = "hi, how aRE you? 42woRDs forty-two; fifty+and+one";
	ft_strcapitalize(x);
	ft_strcapitalize(y);
	printf("%s\n", x);
	printf("%s\n", y);
}
*/
