/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3on_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:28:10 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 17:29:04 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_val_line(int tab[6][6], int side, int y, int x);

void	test3on_linetop(int tab[6][6], int y)
{
	int	x;
	int	count0;
	int	val_line;

	count0 = 0;
	x = 0;
	val_line = get_val_line(tab, 1, y, x);
	while (x < 5)
	{
		if (tab[y][x] == 0)
			count0++;
		x++;
	}
	x = 1;
	if (count0 == 1)
	{
		while (x < 5)
		{
			if (tab[y][x] == 0)
				tab[y][x] = 10 - val_line;
			x++;
		}
	}
}

void	test3on_linebot(int tab[6][6], int y)
{
	int	x;
	int	count0;
	int	val_line;

	count0 = 0;
	x = 4;
	val_line = get_val_line(tab, 2, y, x);
	while (x > 0)
	{
		if (tab[y][x] == 0)
			count0++;
		x--;
	}
	x = 4;
	if (count0 == 1)
	{
		while (x > 0)
		{
			if (tab[y][x] == 0)
				tab[y][x] = 10 - val_line;
			x--;
		}
	}
}

void	test3on_lineright(int tab[6][6], int x)
{
	int	y;
	int	count0;
	int	val_line;

	count0 = 0;
	y = 4;
	val_line = get_val_line(tab, 4, y, x);
	while (y > 0)
	{
		if (tab[y][x] == 0)
			count0++;
		y--;
	}
	y = 4;
	if (count0 == 1)
	{
		while (y > 0)
		{
			if (tab[y][x] == 0)
				tab[y][x] = 10 - val_line;
			y--;
		}
	}
}

void	test3on_lineleft(int tab[6][6], int x)
{
	int	y;
	int	count0;
	int	val_line;

	count0 = 0;
	y = 0;
	val_line = get_val_line(tab, 3, y, x);
	while (y < 5)
	{
		if (tab[y][x] == 0)
			count0++;
		y++;
	}
	y = 1;
	if (count0 == 1)
	{
		while (y < 5)
		{
			if (tab[y][x] == 0)
				tab[y][x] = 10 - val_line;
			y++;
		}
	}
}

void	test3on_line(int tab[6][6])
{
	int	x;
	int	y;

	y = 1;
	while (y < 5)
	{
		test3on_linetop(tab, y);
		y++;
	}
	y = 5;
	while (y-- > 0)
		test3on_linebot(tab, y);
	x = 1;
	while (x++ < 5)
	{
		test3on_lineleft(tab, x);
		x++;
	}
	x = 5;
	while (x-- > 0)
		test3on_lineright(tab, x);
}
