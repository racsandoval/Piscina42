/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squarecmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 05:12:13 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 15:33:12 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/square.h"

int	ft_squarecmp(t_square s1, t_square s2)
{
	if ((s1.first->x - s1.last->x) < (s2.first->x - s2.last->x))
		return (-1);
	else if (s1.first->x > s2.first->x)
		if ((s1.first->x - s1.last->x) < (s2.first->x - s2.last->x))
			return (1);
	return (0);
}
