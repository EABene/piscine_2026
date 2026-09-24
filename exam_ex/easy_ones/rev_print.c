
#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	char	*c = "Hello my frieend in reerrser22094528   X";
	char	*e = "";
	ft_rev_print(e);

	
}
