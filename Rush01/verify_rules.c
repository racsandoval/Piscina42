/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:02:26 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 23:04:11 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#import "lib.h"

void	verify_lines(char *args, char pos[4][4][5])
{
	int i;

	i = 16;
	while (i < 24)
	{
		ver_line(pos, args[i], args[i + 8], (i / 2) - 8);
		i += 2;
	}
}

void	verify_columns(char *args, char pos[4][4][5])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ver_column(pos, args[i], args[i + 8], i / 2);
		i += 2;
	}
}

int		verify_rules(char *args, char pos[4][4][5])
{
	int tot_pos;
	int i;

	verify_lines(args, pos);
	verify_columns(args, pos);
	check_3_lines(pos);
	check_3_col(pos);
	verify_lines_again(args, pos);
	verify_col_again(args, pos);
	verify_lines_again_22(args, pos);
	verify_col_again_22(args, pos);
	check_line_exs(pos);
	check_col_exs(pos);
	tot_pos = generate_pos(pos);
	i = 0;
	while (tot_pos != 1 && i < 5)
	{
		check_line_exs(pos);
		check_col_exs(pos);
		tot_pos = generate_pos(pos);
		i++;
	}
	return (check_resolution(pos));
}
