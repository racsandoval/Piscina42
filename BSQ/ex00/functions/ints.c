/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ints.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 06:18:02 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 06:19:20 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int ret;
	int aux;

	ret = 0;
	aux = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		ret *= 10;
		ret += str[i] - '0';
		if (aux > ret)
			return (-1);
		aux = ret;
		i++;
	}
	return (ret);
}

int		ft_count_rows(int header_len, char *header)
{
	char	*row_count;
	int		i;

	row_count = (char *)malloc(header_len - 2);
	i = 0;
	while (i < header_len - 4)
	{
		if (!(header[i] >= '0' && header[i] <= '9'))
			return (-1);
		row_count[i] = header[i];
		i++;
	}
	row_count[i] = '\0';
	return (ft_atoi(row_count));
}
