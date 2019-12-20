/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:57:05 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/05 07:58:00 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		verify_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v')
			return (0);
		else if (base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int		mult_num(char c, char *base, int mult, int num)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (num + (mult * i));
		i++;
	}
	return (num);
}

int		isb(char c, char *base)
{
	int i;

	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	else if (c == '+' || c == '-')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (2);
		i++;
	}
	return (0);
}

int		create_int(char *str, char *base, int size, int start)
{
	int mult;
	int signal;
	int num;
	int i;

	signal = 1;
	mult = 1;
	i = start - 1;
	num = 0;
	while (i >= 0)
	{
		if (str[i] == '-')
			signal *= (-1);
		if (isb(str[i], base) == 2)
		{
			num = mult_num(str[i], base, mult, num);
			mult *= size;
		}
		i--;
	}
	return (num * signal);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	s;

	if (verify_base(base) == 0)
		return (0);
	i = 0;
	while (base[i] != '\0')
		i++;
	j = 0;
	s = 0;
	while (str[j] == '\t' || str[j] == '\n' || str[j] == '\v' ||
			str[j] == '\f' || str[j] == '\r' || str[j] == ' ')
		j++;
	while (str[j] == '-' || str[j] == '+')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	return (create_int(str, base, i, j));
}
