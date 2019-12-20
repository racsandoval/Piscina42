/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:17:59 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:18:31 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_3_line(char pos[4][4][5], int line, int position)
{
	pos[line][position][0] = '0';
	pos[line][position][1] = '0';
	pos[line][position][3] = '0';
}

void	check_3_lines(char pos[4][4][5])
{
	int	i;
	int	j;
	int	check;
	int	position;

	i = 0;
	while (i < 4)
	{
		check = 0;
		j = 0;
		while (j < 4)
		{
			if (pos[i][j][2] == '1')
			{
				check++;
				position = j;
			}
			j++;
		}
		if (check == 1)
			add_3_line(pos, i, position);
		i++;
	}
}

void	add_3_col(char pos[4][4][5], int col, int position)
{
	pos[position][col][0] = '0';
	pos[position][col][1] = '0';
	pos[position][col][3] = '0';
}

void	check_3_col(char pos[4][4][5])
{
	int i;
	int j;
	int check;
	int position;

	j = 0;
	while (j < 4)
	{
		check = 0;
		i = 0;
		while (i < 4)
		{
			if (pos[i][j][2] == '1')
			{
				check++;
				position = i;
			}
			i++;
		}
		if (check == 1)
			add_3_col(pos, j, position);
		j++;
	}
}
