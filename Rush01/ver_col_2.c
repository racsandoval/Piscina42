/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_col_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:00:04 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:00:06 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ver_col_21(char pos[4][4][5], int col)
{
	pos[0][col][0] = '0';
	pos[0][col][1] = '0';
	pos[0][col][3] = '0';
	pos[1][col][2] = '0';
	pos[1][col][3] = '0';
	pos[2][col][2] = '0';
	pos[2][col][3] = '0';
	pos[3][col][0] = '0';
	pos[3][col][1] = '0';
	pos[3][col][2] = '0';
}

void	ver_col_22(char pos[4][4][5], int col)
{
	pos[0][col][3] = '0';
	pos[1][col][2] = '0';
	pos[2][col][2] = '0';
	pos[3][col][3] = '0';
}

void	ver_col_23(char pos[4][4][5], int col)
{
	pos[3][col][2] = '0';
	pos[3][col][3] = '0';
	pos[2][col][3] = '0';
	pos[1][col][0] = '0';
	pos[1][col][1] = '0';
	pos[1][col][2] = '0';
	pos[0][col][3] = '0';
}

void	ver_col_2x(char pos[4][4][5], char code2, int col)
{
	if (code2 == '1')
		ver_col_21(pos, col);
	else if (code2 == '2')
		ver_col_22(pos, col);
	else if (code2 == '3')
		ver_col_23(pos, col);
}
