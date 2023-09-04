/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:06:48 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 11:28:23 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	see4bot(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 5;
	while (x < 5)
	{
		if (tab[y][x] == 4)
		{
			tab[y - 1][x] = 1;
			tab[y - 2][x] = 2;
			tab[y - 3][x] = 3;
		}
		x++;
	}
}

void	see4left(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x] == 4)
		{
			tab[y][x + 1] = 1;
			tab[y][x + 2] = 2;
			tab[y][x + 3] = 3;
		}
		y++;
	}
}

void	see4right(int tab[6][6])
{
	int	x;
	int	y;

	x = 5;
	y = 1;
	while (y < 5)
	{
		if (tab[y][x] == 4)
		{
			tab[y][x - 1] = 1;
			tab[y][x - 2] = 2;
			tab[y][x - 3] = 3;
		}
		y++;
	}
}

void	see4(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[y][x] == 4)
		{
			tab[y + 1][x] = 1;
			tab[y + 2][x] = 2;
			tab[y + 3][x] = 3;
		}
		x++;
	}
	see4bot(tab);
	see4left(tab);
	see4right(tab);
}
