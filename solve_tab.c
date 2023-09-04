/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:31:56 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 19:18:39 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put4(int tab[6][6]);
void	see4(int tab[6][6]); //in rule4.c file
void	rule2_1(int tab[6][6]);
void	test3on_line(int tab[6][6]);
int		count_nb(int tab[6][6], int i);
void	conditions3(int tab[6][6]);

void	solve_function(int tab[6][6])
{
	int	nb0;

	nb0 = 0;
	nb0 = count_nb(tab, 0);
	test3on_line(tab);
	while (nb0 != count_nb(tab, 0))
	{
		nb0 = count_nb(tab, 0);
		test3on_line(tab);
	}
	conditions3(tab);
}

void	solve_tab(int tab[6][6])
{
	put4(tab);
	see4(tab);
	rule2_1(tab);
	solve_function(tab);
	solve_function(tab);
	solve_function(tab);
	test3on_line(tab);
	if (count_nb(tab, 0) > 0)
		test3on_line(tab);
	if (count_nb(tab, 0) > 0)
		test3on_line(tab);
	conditions3(tab);
}
