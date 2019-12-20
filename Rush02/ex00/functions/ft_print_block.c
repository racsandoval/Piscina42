/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:20:16 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/08 21:41:47 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../functions.h"

void	ft_print_cent(char *num, t_dict *dict, int size)
{
	char	*str;
	char	*value;

	if (num[0] == '0')
		return ;
	str = (char *)malloc(2);
	str[0] = num[0];
	str[1] = '\0';
	value = ft_search_dict(str, dict);
	ft_putstr(value);
	ft_putstr(" ");
	ft_putstr(ft_search_dict("100", dict));
	if (size != 3 || num[1] != '0' || num[2] != '0')
		ft_putstr(" ");
	if (num[1] >= '2')
		ft_putstr("and ");
	free(str);
}

void	ft_print_dez(char *num, t_dict *dict, int size)
{
	char	*str;
	char	*value;

	if (num[1] == '0')
		return ;
	else
	{
		str = (char *)malloc(3);
		str[0] = num[1];
		if (num[1] == '1')
			str[1] = num[2];
		else
			str[1] = '0';
		str[2] = '\0';
		value = ft_search_dict(str, dict);
		ft_putstr(value);
		if ((size != 3 || num[2] != '0') && (size != 3 || num[1] != '1'))
		{
			if (num[1] >= '2' && num[2] != '0')
				ft_putstr("-");
			else
				ft_putstr(" ");
		}
	}
	free(str);
}

void	ft_print_un(char *num, t_dict *dict, int size)
{
	char	*str;
	char	*value;

	if (num[2] == '0')
		return ;
	else
	{
		str = (char *)malloc(2);
		str[0] = num[2];
		str[1] = '\0';
		value = ft_search_dict(str, dict);
		ft_putstr(value);
		if (size != 3)
			ft_putstr(" ");
	}
	free(str);
}

void	ft_print_pos(char *num, t_dict *dict, int size)
{
	char	*str;
	char	*value;
	int		j;

	if (size - 3 == 0)
		return ;
	str = (char *)malloc(size - 3 + 2);
	str[0] = '1';
	j = 1;
	while (j <= size - 3)
	{
		str[j] = '0';
		j++;
	}
	str[j] = '\0';
	value = ft_search_dict(str, dict);
	ft_putstr(value);
	j = 3;
	while (num[j] == '0')
		j++;
	if (j != size)
		ft_putstr(" ");
	free(str);
}

void	ft_print_block(char *str, t_dict *dict)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	ft_print_cent(str, dict, i);
	ft_print_dez(str, dict, i);
	if (str[1] != '1')
		ft_print_un(str, dict, i);
	if (str[0] != '0' || str[1] != '0' || str[2] != '0')
		ft_print_pos(str, dict, i);
}
