/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:18:10 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 15:47:18 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/coordinates.h"
#include "../headers/square.h"

t_square	*create_square(int row, int column)
{
	t_square	*square;
	t_coord		*first;
	t_coord		*last;

	square = (t_square*)malloc(1 * sizeof(t_square));
	first = (t_coord*)malloc(1 * sizeof(t_coord));
	last = (t_coord*)malloc(1 * sizeof(t_coord));
	first->x = row;
	first->y = column;
	last->x = row;
	last->y = column;
	square->first = first;
	square->last = last;
	return (square);
}

void		free_square(t_square *square)
{
	free(square->first);
	free(square->last);
	free(square);
}
