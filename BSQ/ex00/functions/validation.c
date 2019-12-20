/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:18:06 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 15:45:36 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../headers/coordinates.h"

int	is_a_valid_char(char c, char empty, char obstacle)
{
	return (c == empty || c == obstacle);
}

int	get_row_size(char *str)
{
	int row_size;

	row_size = 0;
	while (str[row_size] != '\n')
		row_size++;
	return (row_size);
}

int	is_a_valid_str(char *str, char empty, char obstacle)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		if (!is_a_valid_char(str[i], empty, obstacle))
			return (0);
		i++;
	}
	return (1);
}

int	is_a_valid_file(char *str, char empty, char obstacle)
{
	int i;
	int size;
	int row_size;

	row_size = get_row_size(str);
	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n' && !is_a_valid_char(str[i], empty, obstacle))
			return (0);
		if (str[i] == '\n')
		{
			if (size != row_size)
				return (0);
			size = 0;
		}
		else
			size++;
		i++;
	}
	return (1);
}

int	valid_position(char **board, t_coord first, t_coord last, char obs)
{
	int i;

	i = first.y;
	while (i <= last.y)
	{
		if (board[last.x][i] == obs)
			return (0);
		i++;
	}
	i = first.x;
	while (i <= last.x)
	{
		if (board[i][last.y] == obs)
			return (0);
		i++;
	}
	return (1);
}
