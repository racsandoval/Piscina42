#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main()
{
	char str[] = "Coucou\ntu vás bien ?ççççç";

	ft_putstr_non_printable(str);
}
