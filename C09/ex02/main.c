#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main ()
{
	char	**words;

	words = ft_split("asAOIDUAOIWUDAOISDUAW,ASDMAWNDNASDAWHDAHSNCAkasdauwdhauhsdAIDWHAISFUHIJVHQJWDNASBkjABDSQUWBHVKJASHKakjsdnqhjvakjnwdk123124125123123kkkkkkkkkkkkkkkkkkkkkkk", "k");
	
	int i = 0;
	while (words[i] != '\0')
	{
		printf("%s\n", words[i]);
		i++;
	}
	printf("%s\n", words[i]);	
}
