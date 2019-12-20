#include <stdio.h>

int ft_sqrt(int nb);

int main()
{


	int i = 2147390000;
	while (i < 2147483647)
	{
		if (ft_sqrt(i))
			printf("%d: %d\n", i, ft_sqrt(i));
		i++;
	}
//	printf("%d\n", ft_sqrt(-2));
//	printf("%d\n", ft_sqrt(0));
//	printf("%d\n", ft_sqrt(1));
//	printf("%d\n", ft_sqrt(2));
//	printf("%d\n", ft_sqrt(3));
//	printf("%d\n", ft_sqrt(4));
//	printf("%d\n", ft_sqrt(5));
//	printf("%d\n", ft_sqrt(6));
//	printf("%d\n", ft_sqrt(7));
//	printf("%d\n", ft_sqrt(8));
//	printf("%d\n", ft_sqrt(9));
//	printf("%d\n", ft_sqrt(10));
//	printf("%d\n", ft_sqrt(2500));
//	printf("%d\n", ft_sqrt(2147483647));
}
