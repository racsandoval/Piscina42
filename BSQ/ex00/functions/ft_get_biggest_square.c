/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_biggest_square.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:02:27 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 08:43:06 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/coordinates.h"
#include "../headers/validation.h"
#include "../headers/square.h"
#include "../headers/ft_squarecmp.h"

#include <stdio.h>

t_square	*find_biggest_square_by_pos(char **board, t_coord size, t_coord current, char obs);
void		update_coordinate(t_coord *coordinate);

t_square	*ft_get_biggest_square(char **board, int row, int col, char obs)
{
	t_square		*aux;
	t_square		*square;
	int				i;
	int				j;
	t_coord*	size;
	t_coord*	current;

	size = create_coordinate(row, col);
	square = create_square(0, 0);
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			current = create_coordinate(i, j);
			if (valid_position(board, *current, *current, obs))
			{
				aux = find_biggest_square_by_pos(board, *size, *current, obs);
				if (ft_squarecmp(*aux, *square) < 0)
				{
					printf("first = x(%d) e y(%d)\n", aux->first->x, aux->first->y);
					printf("last  = x(%d) e y(%d)\n", aux->last->x, aux->last->y);
					free_square(square);
					square = aux;
				}
				else
					free_square(aux);
			}
			free(current);
			j++;
		}
		i++;
	}
	free(size);
	return (square);
}

t_square	*find_biggest_square_by_pos(char **board, t_coord size, t_coord current, char obs)
{
	t_square *square;

	square = create_square(current.x, current.y);
	while (current.x < size.x && current.y < size.y)
	{
		square->last->x = current.x;
		square->last->y = current.y;
		if (!valid_position(board, *(square->first), *(square->last), obs))
		{
			square->last->x = current.x - 1;
			square->last->y = current.y - 1;
			return (square);
		}
		current.x++;
		current.y++;
	}
	return (square);
}
