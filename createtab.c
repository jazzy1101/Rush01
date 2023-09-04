/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:18:42 by btiza             #+#    #+#             */
/*   Updated: 2023/09/03 19:04:26 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_tab(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			tab[y][x] = 0;
			x++;
		}
		x = 0;
		y++;
	}
}

void	side_rule(int tab[6][6], char *rule)
{
	int	x;
	int	y;
	int	i;

	i = 16;
	x = 0;
	y = 1;
	while (i < 31)
	{
		while (y != 5)
		{
			tab[y][x] = rule[i] - 48;
			y++;
			i = i + 2;
		}
		x = 5;
		y = 1;
	}
}

void	createtab(int tab[6][6], char *rule) //rule means user input
{
	int	x;
	int	y;
	int	i;

	i = 0;
	y = 0;
	x = 1;
	fill_tab(tab);
	while (i < 16) //assign colup and coldown of user input into the table
	{
		while (x != 5)
		{
			tab[y][x] = rule[i] - 48; //convert userinput into int
			x++;
			i = i + 2;
		}
		y = 5;
		x = 1;
	}
	side_rule(tab, rule);
}
