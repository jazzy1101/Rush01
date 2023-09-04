/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:59:04 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 11:28:24 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

void	ftputstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ftputchar(str[i]);
		i++;
	}
}
