#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "aabbccddee";
	char to_find[] = "cb";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
}
