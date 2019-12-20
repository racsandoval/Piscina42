/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:17:36 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/08 20:23:24 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions.h"

char	*ft_search_dict(char *str, t_dict *dict)
{
	while (dict)
	{
		if (!ft_strcmp(dict->key, str))
			return (dict->value);
		dict = dict->next;
	}
	return ("Error\n");
}
