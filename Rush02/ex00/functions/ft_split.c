/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 23:12:21 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:39:32 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	count_words(char *str, char sep, int nums[2])
{
	int i;
	int j;
	int word;

	i = 0;
	j = 0;
	word = 0;
	nums[0] = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
		{
			word = 0;
			j = 0;
		}
		else if (j > nums[1])
			nums[1] = j;
		if (word == 0 && !(str[i] == sep))
		{
			nums[0]++;
			word = 1;
		}
		i++;
		j++;
	}
}

char	*make_string(int i, char *str, int big, char sep)
{
	int		j;
	char	*word;

	j = 0;
	word = (char *)malloc(big + 1);
	while (str[i + j] != sep && str[i + j] != '\0')
	{
		word[j] = str[i + j];
		j++;
	}
	while (j < big + 1)
	{
		word[j] = '\0';
		j++;
	}
	return (word);
}

char	**ft_split(char *str, char sep, int nums[2])
{
	int		i;
	int		word;
	char	**resp;
	int		pos;

	count_words(str, sep, nums);
	resp = (char **)malloc((nums[1] + 1) * (nums[0] + 1));
	i = 0;
	word = 0;
	pos = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
			word = 0;
		else if (word == 0 && !(str[i] == sep))
		{
			resp[pos] = make_string(i, str, nums[1], sep);
			pos++;
			word = 1;
		}
		i++;
	}
	resp[nums[0]] = (char *)'\0';
	return (resp);
}
