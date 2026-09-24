
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;	
	if (len == 0)
		return(0);

	max = -2147483648;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int	arr[9] = {6, 8, 2, 7, 30, 19, 2, 1, 0};
	int arr2[0];

	printf("%d\n", max(arr, 9));
	printf("%d\n", max(arr2, 0));
}
