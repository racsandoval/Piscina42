/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_resolution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:23:57 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:46:15 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_pos(char pos[4][4][5])
{
	int i;
	int j;
	int k;
	int cont;

	i = -1;
	while (i++ < 3)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			cont = 0;
			while (k < 4)
			{
				if (pos[k][i][j] == '1')
					cont++;
				k++;
			}
			if (cont == 0)
				return (0);
			j++;
		}
	}
	return (1);
}

int	check_line_pos(char pos[4][4][5])
{
	int i;
	int j;
	int k;
	int cont;

	i = -1;
	while (i++ < 3)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			cont = 0;
			while (k < 4)
			{
				if (pos[i][k][j] == '1')
					cont++;
				k++;
			}
			if (cont == 0)
				return (0);
			j++;
		}
	}
	return (1);
}

int	check_pos_0(char pos[4][4][5])
{
	int i;
	int j;
	int k;
	int cont;

	i = -1;
	while (i++ < 3)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			cont = 0;
			while (k < 4)
			{
				if (pos[i][j][k] == '1')
					cont++;
				k++;
			}
			if (cont == 0)
				return (0);
			j++;
		}
	}
	return (1);
}

int	check_resolution(char pos[4][4][5])
{
	int check_pos;
	int check_line;
	int check_col;

	check_pos = check_pos_0(pos);
	check_line = check_line_pos(pos);
	check_col = check_col_pos(pos);
	if (check_pos == 0 || check_line == 0 || check_col == 0)
		return (0);
	return (1);
}
