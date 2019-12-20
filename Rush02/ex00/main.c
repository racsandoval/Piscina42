/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 11:21:25 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/08 21:19:52 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		main(int argc, char **argv)
{
	char	**str;
	char	*r_arq;
	int		nums[2];
	int		i;
	t_dict	*dict;

	if (argc != 2 || !ft_verify_input(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	r_arq = ft_open_dict("numbers.dict");
	str = ft_split(r_arq, '\n', nums);
	dict = ft_create_dict(str, nums[0]);
	ft_arr_free(str);
	i = 0;
	while (argv[1][i] != '\0' && argv[1][i] == '0')
		i++;
	ft_print_value(&argv[1][i], dict);
	ft_struct_free(dict);
	return (0);
}
