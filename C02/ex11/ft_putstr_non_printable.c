/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 08:16:21 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/28 14:23:04 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_hexa(char c)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = c;
	putchar('\\');
	putchar(base[i / 16]);
	putchar(base[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			print_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
