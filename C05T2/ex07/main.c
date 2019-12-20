#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main()
{
	printf("%d 2\n", ft_find_next_prime(-2));
	printf("%d 2\n", ft_find_next_prime(0));
	printf("%d 2\n", ft_find_next_prime(1));
	printf("%d 2\n", ft_find_next_prime(2));
	printf("%d 3\n", ft_find_next_prime(3));
	printf("%d 5\n", ft_find_next_prime(4));
	printf("%d 5\n", ft_find_next_prime(5));
	printf("%d 7\n", ft_find_next_prime(7));
	printf("%d 11\n", ft_find_next_prime(8));
	printf("%d 11\n", ft_find_next_prime(9));
	printf("%d 17\n", ft_find_next_prime(15));
	printf("%d 19\n", ft_find_next_prime(18));
	printf("%d 19\n", ft_find_next_prime(19));
	printf("%d 2147483647\n", ft_find_next_prime(2147483647));
}
