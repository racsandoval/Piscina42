/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:36:07 by rsandova          #+#    #+#             */
/*   Updated: 2019/11/29 14:55:36 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	resp;

	i = 0;
	resp = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && resp == 0 && i < n)
	{
		resp = s1[i] - s2[i];
		i++;
	}
	return (resp);
}
