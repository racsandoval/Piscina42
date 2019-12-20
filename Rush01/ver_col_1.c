/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_col_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:59:17 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 21:59:20 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ver_col_12(char pos[4][4][5], int col)
{
	pos[3][col][0] = '0';
	pos[3][col][1] = '0';
	pos[3][col][3] = '0';
	pos[2][col][2] = '0';
	pos[2][col][3] = '0';
	pos[1][col][2] = '0';
	pos[1][col][3] = '0';
	pos[0][col][0] = '0';
	pos[0][col][1] = '0';
	pos[0][col][2] = '0';
}

void	ver_col_13(char pos[4][4][5], int col)
{
	pos[3][col][2] = '0';
	pos[3][col][3] = '0';
	pos[2][col][3] = '0';
	pos[1][col][3] = '0';
	pos[0][col][0] = '0';
	pos[0][col][1] = '0';
	pos[0][col][2] = '0';
}

void	ver_col_14(char pos[4][4][5], int col)
{
	pos[3][col][1] = '0';
	pos[3][col][2] = '0';
	pos[3][col][3] = '0';
	pos[2][col][0] = '0';
	pos[2][col][2] = '0';
	pos[2][col][3] = '0';
	pos[1][col][0] = '0';
	pos[1][col][1] = '0';
	pos[1][col][3] = '0';
	pos[0][col][0] = '0';
	pos[0][col][1] = '0';
	pos[0][col][2] = '0';
}

void	ver_col_1x(char pos[4][4][5], char code2, int col)
{
	if (code2 == '2')
		ver_col_12(pos, col);
	else if (code2 == '3')
		ver_col_13(pos, col);
	else if (code2 == '4')
		ver_col_14(pos, col);
}
