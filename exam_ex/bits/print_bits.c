
#include <unistd.h>

void	print_bits(char octet)
{
	int	i = 8;
	char	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	print_bits('0');
	print_bits('1');

}
