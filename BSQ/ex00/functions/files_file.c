/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:18:28 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/11 07:43:49 by ecerquei         ###   ########.fr       */
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
#include "../headers/square.h"
#include "../headers/ft_get_biggest_square.h"
#include "../headers/ft_resolve.h"

#include <stdio.h>
#define BUF_SIZE 10005000

char	**ft_trunc_file(char *str, char obstacle, char full)
{
	int			i;
	int			j;
	int			row_len;
	char		**board;
	t_square	*square;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = 1;
	while (str[i + j] != '\n')
		j++;
	row_len = ft_count_rows(i + 1, str);
	board = ft_split(&str[i + 1], '\n', row_len, j - 1);
	square = ft_get_biggest_square(board, row_len, j - 1, obstacle);
	return (ft_resolve(board, square, full));
}

char	**ft_read_file(char *str)
{
	int			fd;
	char		*b_str;
	int			i;

	b_str = malloc((BUF_SIZE + 1) * sizeof(char));
	b_str[BUF_SIZE] = '\0';
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, b_str, BUF_SIZE);
	if (close(fd) == -1)
		return (0);
	i = 0;
	while (b_str[i] != '\n')
		i++;
	if (!is_a_valid_file(&b_str[i + 1], b_str[i - 3], b_str[i - 2]))
		return (0);
	return (ft_trunc_file(b_str, b_str[i - 2], b_str[i - 1]));
}
