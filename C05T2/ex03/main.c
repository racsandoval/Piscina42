#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(2, -7));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(15, 10));
}
