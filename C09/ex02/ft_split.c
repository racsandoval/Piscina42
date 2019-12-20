/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 08:13:58 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/12 12:46:31 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		cmp_char(char c, char *charset)
{
	int i;
	int eq_char;

	eq_char = 0;
	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			eq_char = 1;
		i++;
	}
	return (eq_char);
}

int		count_words(char *str, char *charset)
{
	int	i;
	int	words;
	int word;
	int eq_char;

	i = 0;
	word = 0;
	words = 0;
	while (str[i] != '\0')
	{
		eq_char = cmp_char(str[i], charset);
		if (word == 1 && eq_char == 1)
			word = 0;
		else if (word == 0 && eq_char == 0)
		{
			word = 1;
			words++;
		}
		i++;
	}
	return (words);
}

char	*make_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && !cmp_char(str[i], charset))
		i++;
	word = (char *)malloc(i + 1);
	word[i] = '\0';
	i = 0;
	while (str[i] != '\0' && !cmp_char(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**make_array(char *str, char *charset, char **resp)
{
	int i;
	int word;
	int pos;
	int eq_char;

	word = 0;
	pos = 0;
	i = 0;
	while (str[i] != '\0')
	{
		eq_char = cmp_char(str[i], charset);
		if (word == 1 && eq_char == 1)
			word = 0;
		else if (word == 0 && eq_char == 0)
		{
			resp[pos] = make_word(&str[i], charset);
			word = 1;
			pos++;
		}
		i++;
	}
	resp[pos] = (char *)'\0';
	return (resp);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**resp;

	words = count_words(str, charset);
	resp = (char **)malloc((words + 1) * sizeof(char *));
	return (make_array(str, charset, resp));
}
