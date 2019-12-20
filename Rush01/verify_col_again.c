/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_col_again.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:43:07 by rlopes-d          #+#    #+#             */
/*   Updated: 2019/12/01 22:45:10 by rlopes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "lib.h"

void	ver_col_again(char pos[4][4][5], char code1, char code2, int line)
{
	if (code1 == '3' && code2 == '1')
		ver_col_31_ag(pos, line);
	else if (code1 == '3' && code2 == '2')
		ver_col_32_ag(pos, line);
	else if (code1 == '1' && code2 == '3')
		ver_col_13_ag(pos, line);
	else if (code1 == '2' && code2 == '3')
		ver_col_23_ag(pos, line);
}

void	verify_col_again(char *args, char pos[4][4][5])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ver_col_again(pos, args[i], args[i + 8], i / 2);
		i += 2;
	}
}
