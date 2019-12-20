/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 09:33:16 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/28 15:04:15 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_len(src));
}
