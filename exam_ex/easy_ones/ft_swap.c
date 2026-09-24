
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a = 3;
	int	b = 5;
	int	c = 8;

	printf("%d %d \n", b, c);
	ft_swap(&b, &c);
	printf("%d %d \n", b, c);
}
*/
