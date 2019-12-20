/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 06:13:03 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 06:13:15 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	**ft_split(char *str, char sep, int row_len, int col_len);

#endif
