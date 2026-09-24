#include <stdio.h>

int	bt_atoi(char *str)
{
	int	i;
	int	count_minus;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	if (count_minus % 2 != 0)
		result = -1 * result;
	return (result);
}

int	main(void)
{
	printf("%d\n", bt_atoi("     ++--+-528475jfsdg8943"));
}
