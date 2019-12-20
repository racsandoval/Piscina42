/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_cols.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:06:09 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/01 22:29:39 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "lib.h"

void	ver_col_41(char pos[4][4][5], int col)
{
	pos[0][col][1] = '0';
	pos[0][col][2] = '0';
	pos[0][col][3] = '0';
	pos[1][col][0] = '0';
	pos[1][col][2] = '0';
	pos[1][col][3] = '0';
	pos[2][col][0] = '0';
	pos[2][col][1] = '0';
	pos[2][col][3] = '0';
	pos[3][col][0] = '0';
	pos[3][col][1] = '0';
	pos[3][col][2] = '0';
}

void	ver_column(char pos[4][4][5], char code1, char code2, int col)
{
	if (code1 == '4')
		ver_col_41(pos, col);
	else if (code1 == '3')
		ver_col_3x(pos, code2, col);
	else if (code1 == '2')
		ver_col_2x(pos, code2, col);
	else if (code1 == '1')
		ver_col_1x(pos, code2, col);
}
