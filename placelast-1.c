/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placelast-1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:12:43 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 17:37:38 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_sudoku3(int tab[6][6], int x, int y)
{
	int	y_sub;

	y_sub = y;
	while (y-- > 1)
	{
		if (tab[y][x] == 3)
			return (1);
	}
	while (y++ < 4)
	{
		if (tab[y][x] == 3)
			return (1);
	}
	while (x-- > 1)
	{
		if (tab[y_sub][x] == 3)
			return (1);
	}
	while (x++ < 4)
	{
		if (tab[y_sub][x] == 3)
			return (1);
	}
	return (0);
}

void	put3(int tab[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			if (tab[y][x] == 0)
				tab[y][x] = 3;
			x++;
		}
		y++;
		x = 1;
	}
}

void	rm_1(int tab[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			if (tab[y][x] == -1)
				tab[y][x] = 0;
			x++;
		}
		y++;
		x = 1;
	}
}

void	placelast_1(int tab[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			if (test_sudoku3(tab, x, y) == 1 && tab[y][x] == 0)
				tab[y][x] = -1;
			x++;
		}
		y++;
		x = 1;
	}
	put3(tab);
	rm_1(tab);
}
