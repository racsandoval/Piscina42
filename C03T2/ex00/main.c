#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char str[10] = "abcdefg";
	char str2[12] = "abcdef";

	printf("%d\n", strcmp(str, str2));
	printf("%d\n", ft_strcmp(str, str2));
}
