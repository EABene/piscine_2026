
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	light_switch;

	i = 0;
	light_switch = 0;	
	while (str[i] !='\0')
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			light_switch = 0;
		else if (light_switch == 0)
		{
			light_switch = 1;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' )
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	x[500] = "this strIng wILL be cApItAlIZed.";
	printf("%s\n", ft_strcapitalize(x)); 
	char	y[500] = "aLSo 54aTHeis sTTriNNNNG wiLL B59e 84cAPITALIZED";
	printf("%s\n", ft_strcapitalize(y)); 
}
