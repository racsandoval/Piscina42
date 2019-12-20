#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[11] = "abcde";
	char src[11] = "fhijklmnop";

	printf("%lu\n", strlcat(dest, src, 8));
	printf("%s\n", dest);
	char dest2[11] = "abcde";
	printf("%u\n", ft_strlcat(dest2, src, 8));
	printf("%s\n", dest2);
}
