/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:23:27 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 19:11:45 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_sudoku(int tab[6][6], int i, int x, int y)
{
	int	y_sub;

	y_sub = y;
	while (y-- > 0)
	{
		if (tab[y][x] == i)
			return (1);
	}
	while (y++ < 5)
	{
		if (tab[y][x] == i)
			return (1);
	}
	while (x-- > 0)
	{
		if (tab[y_sub][x] == i)
			return (1);
	}
	while (x++ < 5)
	{
		if (tab[y_sub][x] == i)
			return (1);
	}
	return (0);
}

void	putlast(int tab[6][6], int i)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			if (test_sudoku(tab, i, x, y) == 0)
			{
				tab[y][x] = i;
				return ;
			}
			x++;
		}
		x = 1;
		y++;
	}
}

int	count_nb(int tab[6][6], int i)
{
	int	x;
	int	y;
	int	j;

	j = 0;
	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			if (tab[y][x] == i)
				j++;
			x++;
		}
		x = 1;
		y++;
	}
	return (j);
}
