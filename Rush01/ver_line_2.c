/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_line_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 21:57:32 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 21:57:35 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ver_line_21(char pos[4][4][5], int line)
{
	pos[line][0][0] = '0';
	pos[line][0][1] = '0';
	pos[line][0][3] = '0';
	pos[line][1][2] = '0';
	pos[line][1][3] = '0';
	pos[line][2][2] = '0';
	pos[line][2][3] = '0';
	pos[line][3][0] = '0';
	pos[line][3][1] = '0';
	pos[line][3][2] = '0';
}

void	ver_line_22(char pos[4][4][5], int line)
{
	pos[line][0][3] = '0';
	pos[line][1][2] = '0';
	pos[line][2][2] = '0';
	pos[line][3][3] = '0';
}

void	ver_line_23(char pos[4][4][5], int line)
{
	pos[line][3][2] = '0';
	pos[line][3][3] = '0';
	pos[line][2][3] = '0';
	pos[line][1][0] = '0';
	pos[line][1][1] = '0';
	pos[line][1][2] = '0';
	pos[line][0][3] = '0';
}

void	ver_line_2x(char pos[4][4][5], char code2, int line)
{
	if (code2 == '1')
		ver_line_21(pos, line);
	else if (code2 == '2')
		ver_line_22(pos, line);
	else if (code2 == '3')
		ver_line_23(pos, line);
}
