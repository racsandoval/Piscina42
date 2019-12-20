/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:43:30 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/03 11:52:38 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		ver;
	int		i;
	int		j;

	ver = 1;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && ver == 1)
		{
			if (str[i + j] != to_find[j])
				ver = 0;
			j++;
		}
		if (ver == 1)
		{
			return (str + i);
		}
		ver = 1;
		i++;
	}
	return (0);
}
