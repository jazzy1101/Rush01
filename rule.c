/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:49:07 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 19:18:33 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_rule(char *str)
{
	int	i;
	int	nm;

	nm = 0;
	i = 0;
	if (str[i] < '1' || str[i] > '4')
		return (1);
	i++;
	while (i < 31)
	{
		if (str[i] != ' ')
			return (1);
		i++;
		if (str[i] == '4')
			nm++;
		if (str[i] < '1' || str[i] > '4')
			return (1);
		i++;
	}
	if (nm == 0)
		return (1);
	if (str[i] != '\0')
		return (1);
	return (0);
}
