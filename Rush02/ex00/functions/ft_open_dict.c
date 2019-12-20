/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:51:23 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:43:16 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../functions.h"

char	*ft_open_dict(char *str)
{
	int		fd;
	char	*dict;

	dict = malloc(4097);
	dict[4096] = '\0';
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	read(fd, dict, 4097);
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (dict);
}
