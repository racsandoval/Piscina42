/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:18:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/11 08:01:50 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H

# include "coordinates.h"

int	is_a_valid_str(char *str, char empty, char obstacle);
int	is_a_valid_file(char *str, char empty, char obstacle);
int	valid_position(char **board, t_coord first, t_coord last, char obs);

#endif
