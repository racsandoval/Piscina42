/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 23:12:07 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:38:15 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../functions.h"

void	ft_resp_value(char **aux, char *hash[2])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (aux[1][i] != '\0')
	{
		if (aux[1][i] != ' ' && !(aux[1][i] >= 9 && aux[1][i] <= 13))
			j++;
		i++;
	}
	hash[1] = (char *)malloc(j + 1);
	i -= j;
	j = 0;
	while (aux[1][i] != '\0')
	{
		hash[1][j] = aux[1][i];
		j++;
		i++;
	}
	hash[1][j] = '\0';
}

void	ft_resp_key(char **aux, char *hash[2])
{
	int i;
	int j;

	i = 0;
	while (aux[0][i] != ' ' && !(aux[0][i] >= 9 && aux[0][i] <= 13) &&
		aux[0][i] != '\0')
		i++;
	hash[0] = (char *)malloc(i + 1);
	j = 0;
	while (j < i)
	{
		hash[0][j] = aux[0][j];
		j++;
	}
	hash[0][j] = '\0';
}

char	**ft_two_dots(char *str)
{
	char	**aux;
	char	**hash;
	int		nums[2];

	hash = (char **)malloc(sizeof(char *) * 2);
	aux = (char **)malloc(sizeof(char *) * 2);
	aux = ft_split(str, ':', nums);
	ft_resp_key(aux, hash);
	ft_resp_value(aux, hash);
	ft_arr_free(aux);
	return (hash);
}

t_dict	*add_struct(t_dict *dict, char *str)
{
	t_dict	*resp;
	char	**hash;

	hash = ft_two_dots(str);
	resp = malloc(sizeof(t_dict));
	if (resp)
	{
		resp->key = hash[0];
		resp->value = hash[1];
		resp->next = dict;
	}
	return (resp);
}

t_dict	*ft_create_dict(char **str, int words)
{
	t_dict	*dict;

	dict = NULL;
	while (words - 1 >= 0)
	{
		dict = add_struct(dict, str[words - 1]);
		words--;
	}
	return (dict);
}
