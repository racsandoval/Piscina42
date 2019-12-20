/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:44:47 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/11 15:44:49 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*make_string(int i, char *str, int col_len, char sep)
{
	int		j;
	char	*word;

	j = 0;
	word = (char *)malloc(col_len + 1);
	while (str[i + j] != sep && str[i + j] != '\0')
	{
		word[j] = str[i + j];
		j++;
	}
	while (j < col_len + 1)
	{
		word[j] = '\0';
		j++;
	}
	return (word);
}

char	**ft_split(char *str, char sep, int row_len, int col_len)
{
	int		i;
	int		word;
	char	**resp;
	int		pos;

	resp = (char **)malloc((row_len + 1) * sizeof(char*));
	i = 0;
	word = 0;
	pos = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep)
			word = 0;
		else if (word == 0 && !(str[i] == sep))
		{
			resp[pos] = make_string(i, str, col_len, sep);
			pos++;
			word = 1;
		}
		i++;
	}
	resp[row_len] = (char *)'\0';
	return (resp);
}
