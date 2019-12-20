#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "aabbccddee";
	char to_find[] = "cd";

	printf("%s, LEN %lu\n", strstr(str, to_find), strlen(strstr(str, to_find)));
	printf("%s, LEN %lu\n", ft_strstr(str, to_find), strlen(ft_strstr(str, to_find)));
}
