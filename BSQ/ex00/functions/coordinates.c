/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 07:56:15 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 07:56:17 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/coordinates.h"

t_coord	*create_coordinate(int x, int y)
{
	t_coord	*coordinates;

	coordinates = (t_coord*)malloc(1 * sizeof(t_coord));
	coordinates->x = x;
	coordinates->y = y;
	return (coordinates);
}
