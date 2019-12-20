#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[12] = "somecomessa";
	char src[20] = "transformanesteaqui";

	strlcpy(dest, src,  12);
	printf("%s\n", dest);
	char dest2[12] = "somecomessa";
	char src2[20] = "transformanesteaqui";
	ft_strlcpy(dest2, src2, 12);

	printf("%s\n", dest2);
}
