#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[15] = "eitapreuga";
	char src[20] = "transformanesteaqui";

	strlcpy(dest, src,  0);
	printf("%s\n", dest);
	char dest2[15] = "eitapreuga";
	ft_strlcpy(dest2, src, 0);

	printf("%s\n", dest2);
}
