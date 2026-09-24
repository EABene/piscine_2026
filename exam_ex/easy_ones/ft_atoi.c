
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	count_minus;
	int	result;

	i = 0;
	count_minus = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
		count_minus++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	if (count_minus % 2 != 0)
		result = result * -1;
	return (result);
}

int	main(void)
{
	char *c = "    ---++--76k86234aadg44322";

	printf("%d ", ft_atoi(c));

}
