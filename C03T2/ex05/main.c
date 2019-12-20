#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[7] = "abcde";
	char src[6] = "fhijk";

	printf("%lu\n", strlcat(dest, src, 2));
	printf("%s\n", dest);
	char dest2[7] = "abcde";
	printf("%u\n", ft_strlcat(dest2, src, 2));
	printf("%s\n", dest2);
}
