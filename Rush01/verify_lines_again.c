/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_lines_again.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:30:31 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:32:45 by rlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#import "lib.h"

void	ver_line_again(char pos[4][4][5], char code1, char code2, int line)
{
	if (code1 == '3' && code2 == '1')
		ver_line_31_ag(pos, line);
	else if (code1 == '3' && code2 == '2')
		ver_line_32_ag(pos, line);
	else if (code1 == '1' && code2 == '3')
		ver_line_13_ag(pos, line);
	else if (code1 == '2' && code2 == '3')
		ver_line_23_ag(pos, line);
}

void	verify_lines_again(char *args, char pos[4][4][5])
{
	int i;

	i = 16;
	while (i < 24)
	{
		ver_line_again(pos, args[i], args[i + 8], (i / 2) - 8);
		i += 2;
	}
}
