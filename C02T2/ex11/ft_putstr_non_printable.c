/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 08:16:21 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/03 20:17:54 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_hexa(unsigned char c)
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
	int 			i;
	unsigned char 	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 0 && c <= 31) || c >= 127)
			print_hexa(c);
		else
			write(1, &str[i], 1);
		i++;
	}
}
