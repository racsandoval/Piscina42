/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_line_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:58:26 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 21:58:28 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ver_line_31(char pos[4][4][5], int line)
{
	pos[line][0][2] = '0';
	pos[line][0][3] = '0';
	pos[line][1][3] = '0';
	pos[line][2][3] = '0';
	pos[line][3][0] = '0';
	pos[line][3][1] = '0';
	pos[line][3][2] = '0';
}

void	ver_line_32(char pos[4][4][5], int line)
{
	pos[line][0][2] = '0';
	pos[line][0][3] = '0';
	pos[line][1][3] = '0';
	pos[line][2][0] = '0';
	pos[line][2][1] = '0';
	pos[line][2][2] = '0';
	pos[line][3][3] = '0';
}

void	ver_line_3x(char pos[4][4][5], char code2, int line)
{
	if (code2 == '1')
		ver_line_31(pos, line);
	else if (code2 == '2')
		ver_line_32(pos, line);
}
