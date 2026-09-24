
int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = tesult * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
