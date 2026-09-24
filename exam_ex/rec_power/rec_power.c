
#include <stdio.h>

int	rec_power(int nb, int power)
{
	int	nb_save;

	nb_save = nb;
	if (power < 0)
		return (-1);
	else if (power == 0)
		return (1);
	else
		nb = nb * rec_power(nb, power - 1);
	return (nb);
}

int	main(void)
{
	printf("%d\n", rec_power(5, 8));
	printf("%d\n", rec_power(10, 5));
	printf("%d\n", rec_power(2, 3));
	printf("%d\n", rec_power(8, 2));
}


