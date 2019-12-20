/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:12:01 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/29 14:52:46 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int resp;
	int i;

	i = 0;
	resp = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && resp == 0)
	{
		resp = s1[i] - s2[i];
		i++;
	}
	return (resp);
}
