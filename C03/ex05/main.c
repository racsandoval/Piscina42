#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "abcde";
	char src[] = "fhijk";

	printf("%lu\n", strlcat(dest, src, 5));
	printf("%s\n", dest);
	char dest2[] = "abcde";
	printf("%u\n", ft_strlcat(dest2, src, 5));
	printf("%s\n", dest2);
}
