/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:10:36 by btiza             #+#    #+#             */
/*   Updated: 2023/09/03 19:18:12 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	placelast_1(int tab[6][6]);
void	norm_0(int tab[6][6], int y, int x);
void	norm_1(int tab[6][6], int y, int x);
void	norm_2(int tab[6][6], int y, int x);
void	norm_3(int tab[6][6], int y, int x);

void	conditions3_1(int tab[6][6])
{
	int	y;
	int	x;

	y = 4;
	x = 0;
	while (y > 0)
	{
		norm_1(tab, y, x);
		y--;
	}
}

void	conditions3_2(int tab[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x < 5)
	{
		norm_2(tab, y, x);
		x++;
	}
}

void	conditions3_3(int tab[6][6])
{
	int	y;
	int	x;

	y = 5;
	x = 4;
	while (x > 0)
	{
		norm_3(tab, y, x);
		x--;
	}
}

void	conditions3_0(int tab[6][6])
{
	int	y;
	int	x;

	y = 1;
	x = 0;
	while (y < 5)
	{
		norm_0(tab, y, x);
		y++;
	}
}

void	conditions3(int tab[6][6])
{
	conditions3_0(tab);
	conditions3_1(tab);
	conditions3_2(tab);
	conditions3_3(tab);
	placelast_1(tab);
}
