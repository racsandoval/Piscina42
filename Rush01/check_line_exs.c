/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line_exs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:21:46 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:22:55 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fix_line_ex(char pos[4][4][5], int line, int col, int position)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i != col)
			pos[line][i][position] = '0';
		i++;
	}
}

void	check_line_ex(char pos[4][4][5], int i)
{
	int j;
	int k;
	int count;
	int num;

	j = 0;
	while (j < 4)
	{
		k = 0;
		count = 0;
		while (k < 4)
		{
			if (pos[i][j][k] == '1')
			{
				count++;
				num = k;
			}
			k++;
		}
		if (count == 1)
			fix_line_ex(pos, i, j, num);
		j++;
	}
}

void	check_line_exs(char pos[4][4][5])
{
	int i;

	i = 0;
	while (i < 4)
	{
		check_line_ex(pos, i);
		i++;
	}
}
