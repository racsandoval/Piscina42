/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:47:22 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 15:51:12 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COORDINATES_H
# define COORDINATES_H

typedef struct	s_coord
{
	int x;
	int y;
}				t_coord;

t_coord			*create_coordinate(int x, int y);

#endif
