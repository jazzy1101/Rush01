/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:30 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 18:58:22 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule2_1side(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x] == 2 && tab[y][x + 5] == 1)
			tab[y][x + 1] = 3;
		y++;
	}
	x = 5;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x] == 2 && tab[y][x - 5] == 1)
			tab[y][x - 1] = 3;
		y++;
	}
}

void	rule2_1(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[y][x] == 2 && tab[y + 5][x] == 1)
			tab[y + 1][x] = 3;
		x++;
	}
	x = 1;
	y = 5;
	while (x < 5)
	{
		if (tab[y][x] == 2 && tab[y - 5][x] == 1)
			tab[y - 1][x] = 3;
		x++;
	}
	rule2_1side(tab);
}
