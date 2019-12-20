/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_col_ag_rules.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:13:50 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/01 22:29:47 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ver_col_31_ag(char pos[4][4][5], int col)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[2][col][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[2][col][2] == '1')
	{
		pos[0][col][0] = '0';
		pos[0][col][2] = '0';
		pos[0][col][3] = '0';
		pos[1][col][1] = '0';
		pos[1][col][2] = '0';
		pos[1][col][3] = '0';
	}
}

void	ver_col_32_ag(char pos[4][4][5], int col)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[3][col][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[3][col][2] == '1')
	{
		pos[0][col][1] = '0';
		pos[0][col][2] = '0';
		pos[0][col][3] = '0';
		pos[1][col][0] = '0';
		pos[1][col][2] = '0';
		pos[1][col][3] = '0';
	}
}

void	ver_col_13_ag(char pos[4][4][5], int col)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while (i < 4)
	{
		if (pos[1][col][i] == '1')
			cont++;
		i++;
	}
	if (cont == 1 && pos[1][col][2] == '1')
	{
		pos[3][col][0] = '0';
		pos[3][col][2] = '0';
		pos[3][col][3] = '0';
		pos[2][col][1] = '0';
		pos[2][col][2] = '0';
		pos[2][col][3] = '0';
	}
}

void	ver_col_23_ag(char pos[4][4][5], int col)
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
	{
		pos[3][col][1] = '0';
		pos[3][col][2] = '0';
		pos[3][col][3] = '0';
		pos[2][col][0] = '0';
		pos[2][col][2] = '0';
		pos[2][col][3] = '0';
	}
}
