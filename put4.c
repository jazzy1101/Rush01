/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:18:48 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 19:17:43 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putlast(int tab[6][6], int i);
int		count_nb(int tab[6][6], int i);

void	put4_side(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x - 1] == 1)
			tab[y][x] = 4;
		y++;
	}
	y = 1;
	x = 4;
	while (y < 5)
	{
		if (tab[y][x + 1] == 1)
			tab[y][x] = 4;
		y++;
	}
}

void	put4(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x < 5)
	{
		if (tab[y - 1][x] == 1)
			tab[y][x] = 4;
		x++;
	}
	y = 4;
	x = 1;
	while (x < 5)
	{
		if (tab[y + 1][x] == 1)
			tab[y][x] = 4;
		x++;
	}
	put4_side(tab);
	if (count_nb(tab, 4) == 3) 
		putlast(tab, 4);
}
