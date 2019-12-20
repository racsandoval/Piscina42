/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:42:14 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/01 22:42:17 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#import "lib.h"

int	main(int arcc, char **arcv)
{
	char	pos[4][4][5];
	char	a[4][4][2];
	int		ver;

	ver = validate_arg(arcv[1], arcc);
	if (ver == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	generate_pos_mat(pos);
	ver = verify_rules(arcv[1], pos);
	if (ver == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	generate_matrix(a);
	populate_matrix(pos, a);
	print_matrix(a);
}
