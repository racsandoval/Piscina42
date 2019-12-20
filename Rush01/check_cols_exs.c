/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cols_exs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:20:04 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:21:21 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fix_col_ex(char pos[4][4][5], int line, int col, int position)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i != line)
			pos[i][col][position] = '0';
		i++;
	}
}

void	check_col_ex(char pos[4][4][5], int i)
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
			if (pos[j][i][k] == '1')
			{
				count++;
				num = k;
			}
			k++;
		}
		if (count == 1)
			fix_col_ex(pos, j, i, num);
		j++;
	}
}

void	check_col_exs(char pos[4][4][5])
{
	int i;

	i = 0;
	while (i < 4)
	{
		check_col_ex(pos, i);
		i++;
	}
}
