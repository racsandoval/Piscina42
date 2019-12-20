/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquero-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:40:17 by gquero-p          #+#    #+#             */
/*   Updated: 2019/12/01 23:01:12 by gquero-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

void	print_matrix(char m[4][4][2]);
void	print_pos_matrix(char m[4][4][5]);
void	generate_matrix(char a[4][4][2]);
void	generate_pos_mat(char m[4][4][5]);
void	populate_matrix(char pos[4][4][5], char mat[4][4][2]);
int		validate_arg(char *a, int n);
int		verify_rules(char *args, char pos[4][4][5]);
void	ver_col_3x(char pos[4][4][5], char code2, int col);
void	ver_col_2x(char pos[4][4][5], char code2, int col);
void	ver_col_1x(char pos[4][4][5], char code2, int col);
void	ver_line_3x(char pos[4][4][5], char code2, int line);
void	ver_line_2x(char pos[4][4][5], char code2, int line);
void	ver_line_1x(char pos[4][4][5], char code2, int line);
void	ver_col_31_ag(char pos[4][4][5], int line);
void	ver_col_32_ag(char pos[4][4][5], int line);
void	ver_col_13_ag(char pos[4][4][5], int line);
void	ver_col_23_ag(char pos[4][4][5], int line);
void	ver_line_31_ag(char pos[4][4][5], int line);
void	ver_line_32_ag(char pos[4][4][5], int line);
void	ver_line_13_ag(char pos[4][4][5], int line);
void	ver_line_23_ag(char pos[4][4][5], int line);
void	ver_line(char pos[4][4][5], char code1, char code2, int line);
void	ver_column(char pos[4][4][5], char code1, char code2, int col);
void	check_3_lines(char pos[4][4][5]);
void	check_3_col(char pos[4][4][5]);
void	verify_lines_again(char *args, char pos[4][4][5]);
void	verify_col_again(char *args, char pos[4][4][5]);
void	verify_lines_again_22(char *args, char pos[4][4][5]);
void	verify_col_again_22(char *args, char pos[4][4][5]);
void	check_line_exs(char pos[4][4][5]);
void	check_col_exs(char pos[4][4][5]);
int		check_resolution(char pos[4][4][5]);
int		generate_pos(char pos[4][4][5]);
void	print_pos_matrix(char m[4][4][5]);

#endif
