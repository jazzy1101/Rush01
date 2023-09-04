/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_norminette.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:38:38 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 17:57:02 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	norm_0(int tab[6][6], int y, int x)
{
	if (tab[y][x] == 3 && tab[y][x + 3] == 4 && tab[y][x + 4] == 3
	&& tab[y][x + 1] == 0 && tab[y][x + 2] == 0)
	{
		tab[y][x + 1] = 1; 
		tab[y][x + 2] = 2;
	}
	if (tab[y][x] == 3 && tab[y][x + 3] == 3 && tab[y][x + 4] == 4
	&& tab[y][x + 1] == 0 && tab[y][x + 2] == 0)
	{
		tab[y][x + 1] = 2; 
		tab[y][x + 2] = 1;
	}
	if (tab[y][x] == 3 && tab[y][x + 1] == 0)
		tab[y][x + 1] = -1;
	if (tab[y][x] == 3 && tab[y][x + 4] == 3 && tab[y][x + 1] == 0
	&& tab[y][x + 2] == 0 && tab[y][x + 3] == 0)
	{
		tab[y][x + 1] = 1;
		tab[y][x + 2] = 2;
		tab[y][x + 3] = 4;
	}
}

void	norm_1(int tab[6][6], int y, int x)
{
	if (tab[y][x] == 3 && tab[y][x - 3] == 4 && tab[y][x - 4] == 3
	&& tab[y][x - 1] == 0 && tab[y][x - 2] == 0)
	{
		tab[y][x - 1] = 1;
		tab[y][x - 2] = 2;
	}
	if (tab[y][x] == 3 && tab[y][x - 3] == 3 && tab[y][x - 4] == 4
	&& tab[y][x - 1] == 0 && tab[y][x - 2] == 0)
	{
		tab[y][x - 1] = 2;
		tab[y][x - 2] = 1;
	}
	if (tab[y][x] == 3 && tab[y][x - 1] == 0)
		tab[y][x - 1] = -1;
	if (tab[y][x] == 3 && tab[y][x - 4] == 3 && tab[y][x - 1] == 0
	&& tab[y][x - 2] == 0 && tab[y][x - 3] == 0)
	{
		tab[y][x - 1] = 1;
		tab[y][x - 2] = 2;
		tab[y][x - 3] = 4;
	}
}

void	norm_2(int tab[6][6], int y, int x)
{
	if (tab[y][x] == 3 && tab[y + 3][x] == 4 && tab[y + 4][x] == 3
	&& tab[y + 1][x] == 0 && tab[y + 2][x] == 0)
	{
		tab[y + 1][x] = 1;
		tab[y + 2][x] = 2;
	}
	if (tab[y][x] == 3 && tab[y + 3][x] == 3 && tab[y + 4][x] == 4
	&& tab[y + 1][x] == 0 && tab[y + 2][x] == 0)
	{
		tab[y + 1][x] = 2;
		tab[y + 2][x] = 1;
	}
	if (tab[y][x] == 3 && tab[y + 1][x] == 0)
		tab[y + 1][x] = -1;
	if (tab[y][x] == 3 && tab[y + 4][x] == 3 && tab[y + 1][x] == 0
	&& tab[y + 2][x] == 0 && tab[y + 3][x] == 0)
	{
		tab[y + 1][x] = 1;
		tab[y + 2][x] = 2;
		tab[y + 3][x] = 4;
	}
}

void	norm_3(int tab[6][6], int y, int x)
{
	if (tab[y][x] == 3 && tab[y - 3][x] == 4 && tab[y - 4][x] == 3
	&& tab[y - 1][x] == 0 && tab[y - 2][x] == 0)
	{
		tab[y - 1][x] = 1;
		tab[y - 2][x] = 2;
	}
	if (tab[y][x] == 3 && tab[y - 3][x] == 3 && tab[y - 4][x] == 4
	&& tab[y - 1][x] == 0 && tab[y - 2][x] == 0)
	{
		tab[y - 1][x] = 2;
		tab[y - 2][x] = 1;
	}
	if (tab[y][x] == 3 && tab[y - 1][x] == 0)
		tab[y - 1][x] = -1;
	if (tab[y][x] == 3 && tab[y - 4][x] == 3 && tab[y - 1][x] == 0
	&& tab[y - 2][x] == 0 && tab[y - 3][x] == 0)
	{
		tab[y - 1][x] = 1;
		tab[y - 2][x] = 2;
		tab[y - 3][x] = 4;
	}
}
