/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:30:44 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/11 15:31:28 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/square.h"

char	**ft_resolve(char **board, t_square *square, char full)
{
	int i;
	int j;

	i = square->first->x;
	while (i <= square->last->x)
	{
		j = square->first->y;
		while (j <= square->last->y)
		{
			board[i][j] = full;
			j++;
		}
		i++;
	}
	return (board);
}
