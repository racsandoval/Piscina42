/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:56:23 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/23 12:08:09 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_elev(int n)
{
	int num;
	int	elev;

	num = 1;
	elev = 1;
	while (num <= n)
	{
		elev *= 10;
		num++;
	}
	return (elev);
}

void	ft_print(char arr[], int n, int ver)
{
	if (ver == 1)
	{
		write(1, arr, n);
		if (arr[0] != (10 - n) + 48)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_verifica(char arr[], int n)
{
	int dig;
	int ver;

	dig = 0;
	ver = 1;
	while (dig < n - 1)
	{
		if (arr[dig] >= arr[dig + 1])
		{
			ver = 0;
		}
		dig++;
	}
	ft_print(arr, n, ver);
}

void	ft_print_combn(int n)
{
	char	print[n];
	int		num;
	int		dig;
	int		valor;
	int		elev;

	elev = ft_elev(n);
	num = 1;
	while (num < elev && (num / (elev/ 10) <= 10 - n))
	{
		dig = n - 1;
		valor = num;
		while (dig >= 0)
		{
			print[dig] = (valor % 10) + 48;
			valor /= 10;
			dig--;
		}
		ft_verifica(print, n);
		num++;
	}
}
