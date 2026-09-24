
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char temp;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
		{
			temp = argv[1][i] + 13;
			write(1, &temp, 1);
		}
		else if ((argv[1][i] >= 'N' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
 		{
 			temp = argv[1][i] - 13;
 			write(1, &temp, 1);
 		}	
		else
		{
			temp = argv[1][i];
			write(1, &temp, 1);
		}
		i++;
	}
	write(1, "\n", 1);	

}
