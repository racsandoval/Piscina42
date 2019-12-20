#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(42, "base");
	printf("\n");
	ft_putnbr_base(42, "0123456789abcdef");
	printf("\n");
}
