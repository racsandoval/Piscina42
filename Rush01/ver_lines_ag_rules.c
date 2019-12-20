/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_lines_ag_rules.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:53:08 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:14:32 by rlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ver_line_31_ag(char pos[4][4][5], int line)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][2][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[line][2][2] == '1')
	{
		pos[line][0][0] = '0';
		pos[line][0][2] = '0';
		pos[line][0][3] = '0';
		pos[line][1][1] = '0';
		pos[line][1][2] = '0';
		pos[line][1][3] = '0';
	}
}

void	ver_line_32_ag(char pos[4][4][5], int line)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][3][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[line][3][2] == '1')
	{
		pos[line][0][1] = '0';
		pos[line][0][2] = '0';
		pos[line][0][3] = '0';
		pos[line][1][0] = '0';
		pos[line][1][2] = '0';
		pos[line][1][3] = '0';
	}
}

void	ver_line_13_ag(char pos[4][4][5], int line)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][1][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[line][1][2] == '1')
	{
		pos[line][3][0] = '0';
		pos[line][3][2] = '0';
		pos[line][3][3] = '0';
		pos[line][2][1] = '0';
		pos[line][2][2] = '0';
		pos[line][2][3] = '0';
	}
}

void	ver_line_23_ag(char pos[4][4][5], int line)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][0][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[line][0][2] == '1')
	{
		pos[line][3][1] = '0';
		pos[line][3][2] = '0';
		pos[line][3][3] = '0';
		pos[line][2][0] = '0';
		pos[line][2][2] = '0';
		pos[line][2][3] = '0';
	}
}
