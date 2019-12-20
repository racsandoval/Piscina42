#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int		make_test(char *str, int i)
{
	int j = 0;
	
	while (j < 10)
	{
		str[j] = i;
		j++;
		i++;
	}
	str[j] = '\0';
	return (i);
}

int main()
{
	char **arr;
	char *str;
	int i = 65;
	int k = 0;

	arr = (char **) malloc (4 * 11);

	while (k < 3)
	{
		str = (char *) malloc (11);
		i = make_test(str, i);
		arr[k] = str;
		k++;
	}
	
	arr[3] = (char *) '\0';

	//printf("STR %s\n", arr[0]);
	//printf("STR %s\n", arr[1]);
	//printf("STR %s\n", arr[2]);
	
	ft_show_tab(ft_strs_to_tab(3, arr));
}
