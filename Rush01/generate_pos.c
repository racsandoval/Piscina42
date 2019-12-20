/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:50:11 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:51:52 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_num_pos(int num_pos[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		num_pos[i] = 1;
		i++;
	}
}

void	count_pos(char pos[4][4][5], int num_pos[4])
{
	int	i;
	int j;
	int k;
	int cont;

	i = 0;
	while (i < 4)
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
			j++;
			num_pos[i] *= cont;
		}
		i++;
	}
}

int		generate_pos(char pos[4][4][5])
{
	int num_pos[4];
	int tot_pos;
	int i;

	init_num_pos(num_pos);
	count_pos(pos, num_pos);
	i = 0;
	tot_pos = 1;
	while (i < 4)
	{
		tot_pos *= num_pos[i];
		i++;
	}
	return (tot_pos);
}
