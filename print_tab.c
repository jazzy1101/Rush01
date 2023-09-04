/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:35:01 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 17:31:11 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ftputchar(char c);

void	print_tab(int tab[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < 5)
	{
		while (x < 5)
		{
			ftputchar(tab[y][x] + 48);
			if (x != 4)
				ftputchar(' ');
			x++;
		}
		ftputchar('\n');
		x = 1;
		y++;
	}
}
