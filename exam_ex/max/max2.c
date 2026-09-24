#include <stdio.h>

int	max(int *arr, int len)
{
	int	i;
	int	max_nb;

	i = 0;
	max_nb = 0;
	while (i < len)
	{
		if (arr[i] > max_nb)
			max_nb = arr[i];
		if (arr[i] < 0)
			return (-1);
		i++;
	}
	return (max_nb);
}

int	main(void)
{
	int	arr[12] = {2, 59, 8, 9, 5, 3, 5, 6, 10, 6, 0, -488};

	printf("%d\n", max(arr, 12));
}
