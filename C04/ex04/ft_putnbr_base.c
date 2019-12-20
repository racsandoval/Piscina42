/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:49:40 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/04 14:58:40 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char c;

	c = nbr + 48;
	write(1, &c, 1);
}

void	print_num_base(int nbr, char *base, int size)
{
	unsigned int	num;
	char			c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * (-1);
	}
	else
		num = nbr;
	if (num >= (unsigned int)size)
		print_num_base(num / size, base, size);
	c = base[num % size];
	write(1, &c, 1);
}

int		verify_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	if (verify_base(base))
	{
		i = 0;
		while (base[i] != '\0')
			i++;
		print_num_base(nbr, base, i);
	}
}
