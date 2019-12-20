/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_col22.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:35:26 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:42:18 by rlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ver_col_22_3p(char pos[4][4][5], int col)
{
	int i;
	int cont;
	int place;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[1][col][i] == '1')
		{
			cont++;
			place = i;
		}
		i++;
	}
	if (cont == 1 && pos[1][col][3] == '1')
	{
		pos[2][col][1] = '0';
		pos[2][col][2] = '0';
		pos[2][col][3] = '0';
		pos[3][col][0] = '0';
		pos[3][col][2] = '0';
		pos[3][col][3] = '0';
	}
}

void	ver_col_22_3u(char pos[4][4][5], int col)
{
	int i;
	int cont;
	int place;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[2][col][i] == '1')
		{
			cont++;
			place = i;
		}
		i++;
	}
	if (cont == 1 && pos[2][col][3] == '1')
	{
		pos[1][col][1] = '0';
		pos[1][col][2] = '0';
		pos[1][col][3] = '0';
		pos[0][col][0] = '0';
		pos[0][col][2] = '0';
		pos[0][col][3] = '0';
	}
}

void	ver_col_22_ag(char pos[4][4][5], int col)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[0][col][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[0][col][2] == '1')
		ver_col_22_3p(pos, col);
	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[3][col][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[3][col][2] == '1')
		ver_col_22_3u(pos, col);
}

void	ver_col_22_other(char pos[4][4][5], char code1, char code2, int col)
{
	if (code1 == '2' && code2 == '2')
		ver_col_22_ag(pos, col);
}

void	verify_col_again_22(char *args, char pos[4][4][5])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ver_col_22_other(pos, args[i], args[i + 8], i / 2);
		i += 2;
	}
}
