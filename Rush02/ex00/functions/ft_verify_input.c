/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 10:13:10 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:04:15 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_digits(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_num_length(char *str)
{
	int i;
	int	j;

	i = 0;
	while (str[i] != '\0' && str[i] == '0')
		i++;
	j = 0;
	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

int	ft_verify_input(char *str)
{
	if (!ft_verify_digits(str) || ft_num_length(str) > 39)
		return (0);
	return (1);
}
