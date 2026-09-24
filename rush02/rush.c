
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	FILE* fptr; //File pointer to store the value returned by fopen

	fptr = fopen("numbers.dict", "r"); // opening the file in read mode
	if (fptr == NULL)
		ft_putstr("Opening of file has failed.");
	else
		ft_putstr("The file has been opened sucessfully.");

	int	digit;
	char	*ones[10] = {"zero", "one", "two", "three", "four", 
						"five","six", "seven", "eight", "nine"};
	char	*teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
						"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char	*tens[10] = {"zero", "ten", "twenty", "thirty", "fourty", "fifty",
						"sixty", "seventy", "eighty", "ninety"};

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	digit = ft_atoi(argv[1]);
	printf("digit: %d\n", digit);
	if (digit <= 9)
		ft_putstr(ones[digit]);
	else if (digit >= 10 && digit <= 19)
		ft_putstr(teens[digit % 10]);
	else if (digit > 19)
	{
		ft_putstr(tens[digit / 10]);
		if (digit % 10 != 0)
		{
			ft_putstr(" ");
			ft_putstr(ones[digit % 10]);
		}
	}
	ft_putstr("\n");
	fclose(fptr); // Close the file
	ft_putstr("The file is now closed.");
	return (0);
}
