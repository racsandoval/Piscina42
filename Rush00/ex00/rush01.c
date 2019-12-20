/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:58:43 by leaalmei          #+#    #+#             */
/*   Updated: 2019/11/24 16:21:22 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char c_prim, char c_cent, char c_ult)
{
	int n;

	n = 1;
	while (n <= x)
	{
		if (n == 1)
		{
			ft_putchar(c_prim);
		}
		else if (n == x)
		{
			ft_putchar(c_ult);
		}
		else
		{
			ft_putchar(c_cent);
		}
		n++;
	}
}

void	rush(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1)
		{
			ft_print_line(x, '/', '*', '\\');
		}
		else if (n == y)
		{
			ft_print_line(x, '\\', '*', '/');
		}
		else
		{
			ft_print_line(x, '*', ' ', '*');
		}
		write(1, "\n", 1);
		n++;
	}
}
