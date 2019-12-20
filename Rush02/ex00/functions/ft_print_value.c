/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:02:50 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/08 21:43:53 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions.h"
#include <stdlib.h>

char	*make_right_string(char *str)
{
	int		size;
	int		i;
	char	*num;

	size = ft_num_length(str);
	i = size;
	while (i % 3 != 0)
		i++;
	num = (char *)malloc(i + 1);
	num[i] = '\0';
	while (size > 0)
	{
		num[i - 1] = str[size - 1];
		i--;
		size--;
	}
	while (i > 0)
	{
		num[i - 1] = '0';
		i--;
	}
	return (num);
}

void	ft_print_value(char *str, t_dict *dict)
{
	char	*num;
	int		i;

	num = make_right_string(str);
	i = 0;
	if (num[0] == '\0')
	{
		ft_putstr(ft_search_dict("0", dict));
		ft_putstr("\n");
		return ;
	}
	while (num[i] != '\0')
	{
		if (i % 3 == 0)
			ft_print_block(&num[i], dict);
		i++;
	}
	ft_putstr("\n");
}
