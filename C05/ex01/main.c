#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(6));
	printf("%d\n", ft_recursive_factorial(-3));
}
