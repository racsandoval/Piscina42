#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned nb);

int main()
{
	char dest[11] = "aaaaa";
	char src[6] = "bbbbb";

	printf("%s\n", strncat(dest, src, 5));

	char dest2[11] = "aaaaa";

	printf("%s\n", ft_strncat(dest2, src, 5));
}
