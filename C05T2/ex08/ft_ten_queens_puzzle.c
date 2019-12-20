/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:21:14 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/05 12:24:15 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_eatten(int col[10], int i, int n)
{
	int k;

	k = 0;
	while (k < n)
	{
		if (col[k] == i)
			return (0);
		k++;
	}
	k = 0;
	while (k < n)
	{
		if (k + col[k] == n + i || k - col[k] == n - i)
			return (0);
		k++;
	}
	return (1);
}

void	solver(int col[10], int n, int *res)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (i++ < 9)
	{
		if (not_eatten(col, i, n))
		{
			col[n] = i;
			if (n == 9)
			{
				*res = *res + 1;
				j = -1;
				while (j++ < 9)
				{
					c = col[j] + 48;
					write(1, &c, 1);
				}
				write(1, "\n", 1);
			}
			else
				solver(col, n + 1, res);
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int col[10];
	int num;
	int *res;

	num = 0;
	res = &num;
	(solver(col, 0, res));
	return (*res);
}
