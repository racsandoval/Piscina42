/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 22:57:00 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/10 23:33:37 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H

# include "coordinates.h"

typedef struct	s_square
{
	t_coord *first;
	t_coord *last;
}				t_square;

t_square		*create_square(int row, int column);
void			free_square(t_square *square);

#endif
