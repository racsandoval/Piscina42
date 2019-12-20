/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:56:23 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/26 14:55:54 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb1(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		if (i != '9')
		{
			write(1, ", ", 2);
		}
		i++;
	}
}

void	ft_putchar(int n, char arr[n])
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &arr[i], 1);
		i++;
	}
}

int		ft_next_column(int n, char arr[n], int i)
{
	int aux;

	ft_putchar(n, arr);
	if (arr[0] != 10 - n + 48)
	{
		write(1, ", ", 2);
	}
	if (i > 0)
	{
		while (arr[i] == 10 - n + i + 48 && i > 0)
		{
			i--;
		}
		aux = arr[i];
		while (i < n)
		{
			aux++;
			arr[i] = aux;
			i++;
		}
		i--;
	}
	return (i);
}

int		ft_print_comb_else(int n, char arr[n])
{
	int i;

	i = n - 1;
	while (arr[0] <= 10 - n + 48)
	{
		i = ft_next_column(n, arr, i);
	}
	return (i);
}

void	ft_print_combn(int n)
{
	char	arr[n];
	int		i;

	i = -1;
	while (i++ < n)
		arr[i] = i + 48;
	if (n == 1)
		ft_print_comb1();
	else
	{
		i = n - 1;
		while (arr[0] <= 10 - n + 48)
		{
			if (arr[i] < 10 - n + i + 48)
			{
				ft_putchar(n, arr);
				write(1, ", ", 2);
				arr[i]++;
				i = n - 1;
			}
			else if (arr[i] == 10 - n + i + 48)
				i = ft_print_comb_else(n, arr);
		}
	}
}
