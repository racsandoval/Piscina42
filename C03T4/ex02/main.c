#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char dest[11] = "aaaaa";
	char src[6] = "bbbbb";

	printf("%s\n", strcat(dest, src));
	char dest2[11] = "aaaaa";
	printf("%s\n", ft_strcat(dest2, src));
}
