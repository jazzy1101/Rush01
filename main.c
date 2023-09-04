/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschaft <cecile.schaft@orange.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:48:59 by jschaft           #+#    #+#             */
/*   Updated: 2023/09/03 19:18:21 by jschaft          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid_rule(char *str);
void	ftputstr(char *str);
void	createtab(int tab[6][6], char *rule);
void	solve_tab(int tab[6][6]);
void	print_tab(int tab[6][6]);
int		test_complete(int tab[6][6]);

int	error(void)
{
	ftputstr("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	int	tab[6][6];

	if (argc != 2)
		return (error());
	if (valid_rule(argv[1]) == 1)
		return (error());
	createtab(tab, argv[1]);
	solve_tab(tab);
	if (test_complete(tab) == 1)
		return (error());
	print_tab(tab);
	return (0);
}
