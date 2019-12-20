#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	int resp;
	char str[10] = "12345";

	resp = ft_strlen(str);
	printf("%d\n", resp);
}
