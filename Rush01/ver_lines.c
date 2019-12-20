/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:41:40 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:49:28 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "lib.h"

void	ver_line_41(char pos[4][4][5], int line)
{
	pos[line][0][1] = '0';
	pos[line][0][2] = '0';
	pos[line][0][3] = '0';
	pos[line][1][0] = '0';
	pos[line][1][2] = '0';
	pos[line][1][3] = '0';
	pos[line][2][0] = '0';
	pos[line][2][1] = '0';
	pos[line][2][3] = '0';
	pos[line][3][0] = '0';
	pos[line][3][1] = '0';
	pos[line][3][2] = '0';
}

void	ver_line(char pos[4][4][5], char code1, char code2, int line)
{
	if (code1 == '4')
		ver_line_41(pos, line);
	else if (code1 == '3')
		ver_line_3x(pos, code2, line);
	else if (code1 == '2')
		ver_line_2x(pos, code2, line);
	else if (code1 == '1')
		ver_line_1x(pos, code2, line);
}
