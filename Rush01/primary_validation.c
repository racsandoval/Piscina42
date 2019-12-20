/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primary_validation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:47:31 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:57:02 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	arg_dif_validation(char *a)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (a[i] + a[i + 8] - 96 < 3 || a[i] + a[i + 8] - 96 > 5)
		{
			return (0);
		}
		i += 2;
	}
	i = 16;
	while (i < 24)
	{
		if (a[i] + a[i + 8] - 96 < 3 || a[i] + a[i + 8] - 96 > 5)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	validate_arg(char *a, int n)
{
	int i;
	int ver;

	if (n != 2)
		return (0);
	i = 0;
	while (a[i] != '\0')
	{
		if (i % 2 == 0 && !(a[i] >= '1' && a[i] <= '4'))
			return (0);
		else if (i % 2 == 1 && a[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	ver = arg_dif_validation(a);
	if (ver == 0)
		return (0);
	return (1);
}
