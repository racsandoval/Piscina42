/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 08:53:33 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 20:12:54 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_arr_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free(str);
}
