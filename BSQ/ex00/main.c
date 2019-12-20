/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:09:53 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/11 15:58:05 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/files.h"
#include "headers/strings.h"

#include <stdio.h>

char	**ft_stdin()
{
	char	**board;
	int i;

	board = ft_read_stdin();
	if (!board)
	{	
		ft_putstr("Error\n");
		return (0);
	}
	i = 0;
	while (board[i] != '\0')
	{
		ft_putstr(board[i]);
		i++;
	}
	return (board);
}

char	**ft_read(int argc, char **argv)
{
	char	**board;
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		board = ft_read_file(argv[i]);
		if (!board)
		{	
			ft_putstr("Error\n");
			return (0);
		}
		j = 0;
		while (board[j] != '\0')
		{
			ft_putstr(board[j]);
			ft_putstr("\n");
			j++;
		}
		i++;
	}
	return (board);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 1)
	{
		if (ft_stdin())
			return (0);
	}
	else if (argc >= 2)
	{
		if (ft_read(argc, argv))
			return (0);
	}
	return (1);
}
