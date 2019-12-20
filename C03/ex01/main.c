#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char str[50] = "abcdeF";
	char str2[30] = "abcdef";

	printf("%d\n", strncmp(str, str2, 20));
	printf("%d\n", ft_strncmp(str, str2, 20));
}
