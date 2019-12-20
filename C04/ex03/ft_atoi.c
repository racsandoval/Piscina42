/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 09:55:19 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/04 14:54:19 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (str[i] != '\0')
	{
		if (space(str[i]))
			status = 1;
		else if ((str[i] == '-' || str[i] == '+') && status == 1)
			status = 2;
		else if (str[i] >= '0' && str[i] <= '9' && status == 2)
			status = 3;
		if (str[i] == '-' && status == 2)
			signal *= -1;
		else if (status == 3)
			return (make_int(&str[i], signal));
		i++;
	}
	return (0);
}
