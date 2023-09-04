/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_val-line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:47:09 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 17:29:22 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_val_line_pair(int tab[6][6], int side, int y, int x)
{
	int	val;

	val = 0;
	if (side == 2)
	{
		while (x > 0)
		{
			val = val + tab[y][x];
			x--;
		}
		return (val);
	}
	if (side == 4)
	{
		while (y > 0)
		{
			val = val + tab[y][x];
			y--;
		}
		return (val);
	}
	return (0);
}

int	get_val_line(int tab[6][6], int side, int y, int x)
{
	int	val;

	val = 0;
	if (side == 1)
	{
		while (x++ < 4)
			val = val + tab[y][x];
		return (val);
	}
	if (side == 3)
	{
		while (y < 4)
		{
			val = val + tab[y][x];
			y++;
		}
		return (val);
	}
	if (side == 2)
		return (get_val_line_pair(tab, side, y, x));
	if (side == 4)
		return (get_val_line_pair(tab, side, y, x));
	return (0);
}
