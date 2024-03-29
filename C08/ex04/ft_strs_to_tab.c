/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:30:52 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/10 07:29:12 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*make_str(char *str)
{
	char	*resp;
	int		i;

	resp = (char *)malloc(ft_strlen(str) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		resp[i] = str[i];
		i++;
	}
	return (resp);
}

t_stock_str			make_dict(char *str)
{
	t_stock_str	dict;

	dict.size = ft_strlen(str);
	dict.str = make_str(str);
	dict.copy = make_str(str);
	return (dict);
}

int					check_aloc(t_stock_str *arr, char **av, int ac)
{
	int i;
	int j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] != arr[i].str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;
	t_stock_str	dict;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		arr[i] = make_dict(av[i]);
		i++;
	}
	dict.str = (char *)'\0';
	arr[i] = dict;
	if (!check_aloc(arr, av, ac))
		return (NULL);
	return (arr);
}
