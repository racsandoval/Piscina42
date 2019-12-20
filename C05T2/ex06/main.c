#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
	printf("%d 0\n", ft_is_prime(-4));
	printf("%d 0\n", ft_is_prime(0));
	printf("%d 0\n", ft_is_prime(1));
	printf("%d 1\n", ft_is_prime(2));
	printf("%d 1\n", ft_is_prime(3));
	printf("%d 0\n", ft_is_prime(4));
	printf("%d 1\n", ft_is_prime(5));
	printf("%d 1\n", ft_is_prime(7));
	printf("%d 0\n", ft_is_prime(12));
	printf("%d 0\n", ft_is_prime(15));
	printf("%d 1\n", ft_is_prime(17));
	printf("%d 1\n", ft_is_prime(2147483647));
}
