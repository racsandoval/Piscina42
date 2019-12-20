/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_line22.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:20:35 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:28:51 by rlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ver_line_22_3p(char pos[4][4][5], int line)
{
	int i;
	int cont;
	int place;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][1][i] == '1')
		{
			cont++;
			place = i;
		}
		i++;
	}
	if (cont == 1 && pos[line][1][3] == '1')
	{
		pos[line][2][1] = '0';
		pos[line][2][2] = '0';
		pos[line][2][3] = '0';
		pos[line][3][0] = '0';
		pos[line][3][2] = '0';
		pos[line][3][3] = '0';
	}
}

void	ver_line_22_3u(char pos[4][4][5], int line)
{
	int i;
	int cont;
	int place;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][2][i] == '1')
		{
			cont++;
			place = i;
		}
		i++;
	}
	if (cont == 1 && pos[line][2][3] == '1')
	{
		pos[line][1][1] = '0';
		pos[line][1][2] = '0';
		pos[line][1][3] = '0';
		pos[line][0][0] = '0';
		pos[line][0][2] = '0';
		pos[line][0][3] = '0';
	}
}

void	ver_line_22_ag(char pos[4][4][5], int line)
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
		ver_line_22_3p(pos, line);
	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[line][3][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[line][3][2] == '1')
		ver_line_22_3u(pos, line);
}

void	ver_line_22_other(char pos[4][4][5], char code1, char code2, int line)
{
	if (code1 == '2' && code2 == '2')
		ver_line_22_ag(pos, line);
}

void	verify_lines_again_22(char *args, char pos[4][4][5])
{
	int i;

	i = 16;
	while (i < 24)
	{
		ver_line_22_other(pos, args[i], args[i + 8], (i / 2) - 8);
		i += 2;
	}
}
