/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:45:23 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/01 23:41:00 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(char m[4][4][2])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &m[i][j][0], 1);
			if (j != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

void	print_pos_matrix(char m[4][4][5])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				write(1, &m[i][j][k], 1);
				k++;
			}
			if (j != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

void	generate_matrix(char a[4][4][2])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			a[i][j][0] = 48;
			j++;
		}
		i++;
	}
}

void	generate_pos_mat(char m[4][4][5])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				m[i][j][k] = '1';
				k++;
			}
			j++;
		}
		i++;
	}
}

void	populate_matrix(char pos[4][4][5], char mat[4][4][2])
{
	int i;
	int j;
	int k;
	int cont;
	int prim;

	i = -1;
	prim = 1;
	while (i++ < 3)
	{
		j = -1;
		while (j++ < 3)
		{
			k = -1;
			while (k++ < 3)
			{
				if (pos[i][j][k] == '1')
					mat[i][j][0] = k + 49;
			}
			if (pos[i][j][0] == '1' && pos[i][j][1] == '1' && prim == 1)
			{
				mat[i][j][0] = '1';
				prim = 0;
			}
		}
	}
}
