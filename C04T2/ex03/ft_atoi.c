/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 09:55:19 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/04 19:42:23 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	make_int(char *str, int signal)
{
	int i;
	int resp;
	int mult;

	i = 0;
	resp = 0;
	mult = 1;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i > 0)
	{
		resp += (str[i - 1] - 48) * mult;
		mult *= 10;
		i--;
	}
	if (signal < 0)
		resp *= -1;
	return (resp);
}

int	ft_atoi(char *str)
{
	int	i;
	int	status;
	int	signal;

	i = 0;
	status = 0;
	signal = 1;
	while (space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		return (make_int(&str[i], signal));
	return (0);
}
