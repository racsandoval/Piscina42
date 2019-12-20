/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 09:33:37 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:03:47 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../functions.h"

void	ft_struct_free(t_dict *dict)
{
	if (dict)
	{
		free(dict->key);
		free(dict->value);
		ft_struct_free(dict->next);
		free(dict);
	}
}
