/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:09:06 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/21 17:46:23 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	print[3];
	int		num;

	num = 0;
	while (num <= 789)
	{
		print[0] = (num / 100) + 48;
		print[1] = ((num % 100) / 10) + 48;
		print[2] = (num % 10) + 48;
		if (print[0] < print[1] && print[1] < print[2])
		{
			write(1, &print, 3);
			if (num != 789)
			{
				write(1, ", ", 2);
			}
		}
		num++;
	}
}
