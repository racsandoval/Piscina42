#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[15] = "";
	char src[20] = "transformanesteaqui";

//	strlcpy(dest, src,  0);
	printf("%s:%lu\n", dest, strlcpy(dest, src, 0));
	char dest2[15] = "";
//	ft_strlcpy(dest2, src, 0);

	printf("%s:\%d\n", dest2, ft_strlcpy(dest2, src, 0));
}
