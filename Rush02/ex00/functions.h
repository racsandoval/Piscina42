/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:45:38 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/09 13:44:14 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

typedef	struct s_dict	t_dict;

struct	s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
};

void	ft_putstr(char *str);
char	*ft_open_dict(char *str);
char	**ft_split(char *str, char sep, int	nums[2]);
t_dict	*ft_create_dict(char **str, int words);
void	ft_arr_free(char **str);
void	ft_struct_free(t_dict	*dict);
int		ft_verify_input(char *str);
int		ft_num_length(char *str);
void	ft_print_value(char *str, t_dict *dict);
void	ft_print_block(char *str, t_dict *dict);
int		ft_strcmp(char *s1, char *s2);
char	*ft_search_dict(char *str, t_dict *dict);

#endif
