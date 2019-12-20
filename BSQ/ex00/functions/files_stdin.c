/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:18:36 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/11 16:14:06 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../headers/strings.h"
#include "../headers/ints.h"
#include "../headers/validation.h"
#include "../headers/ft_get_biggest_square.h"
#include "../headers/square.h"
#include "../headers/ft_resolve.h"

#include <stdio.h>
#define BUF_SIZE 10005000

int		ft_generate_row(char **board, char *char_types, int pos, int col_count)
{
	char	*row;
	int		row_len;

	char_types[3] = 0;
	row = (char *)malloc((col_count + 1) * sizeof(char));
	row_len = read(0, row, BUF_SIZE);
	row[row_len] = '\0';
	if (row_len != col_count ||
			!is_a_valid_str(row, char_types[0], char_types[1]))
		return (0);
	board[pos] = row;
	return (pos + 1);
}

char	**ft_generate_board(char *ctypes, char *row, int rcount, int ccount)
{
	char	**board;
	char	*first_row;
	int		i;

	board = (char**)malloc((rcount + 1) * sizeof(char*));
	first_row = (char*)malloc((ccount + 1) * sizeof(char));
	i = 0;
	while (i < ccount)
	{
		first_row[i] = row[i];
		i++;
	}
	first_row[i] = '\0';
	if (!is_a_valid_str(first_row, ctypes[0], ctypes[1]))
		return (0);
	board[0] = first_row;
	i = 1;
	while (i < rcount && i != 0)
	{
		i = ft_generate_row(board, ctypes, i, ccount);
		if (!i)
			return (0);
	}
	board[i] = (char *)'\0';
	return (board);
}

char	**ft_read_stdin(void)
{
	char		*row;
	char		*header;
	int			len[3];
	char		**board;
	t_square	*square;

	header = (char *)malloc((BUF_SIZE + 1) * sizeof(char));
	len[0] = read(0, header, BUF_SIZE);
	len[1] = ft_count_rows(len[0], header);
	if (len[1] <= 0)
		return (0);
	row = (char *)malloc((BUF_SIZE + 1) * sizeof(char));
	len[2] = read(0, row, BUF_SIZE);
	board = ft_generate_board(&header[len[0] - 4], row, len[1], len[2]);
	square = ft_get_biggest_square(board, len[1], len[2], header[len[0] - 3]);
	return (ft_resolve(board, square, header[len[0] - 2]));
}
