/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsandova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:37:20 by rsandova          #+#    #+#             */
/*   Updated: 2019/12/04 09:22:23 by rsandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_start;

	i = 0;
	is_start = 1;
	while (str[i] != '\0')
	{
		if (is_start == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			is_start = 0;
		}
		else if (is_start == 1 && is_alphanumeric(str[i]) == 1)
			is_start = 0;
		else if (is_start == 0 && is_alphanumeric(str[i]) == 0)
			is_start = 1;
		else if (is_start == 0 && str[i] >= 65 && str[i] <= 92)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
