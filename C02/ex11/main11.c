#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main()
{
	char str[22] = "Coucou\btu vás bien ?";

	ft_putstr_non_printable(str);
}
