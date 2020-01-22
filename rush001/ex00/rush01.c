/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:22:53 by hthomas           #+#    #+#             */
/*   Updated: 2019/09/07 10:22:54 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

#include <stdlib.h>

int	**init_tab_to_0(int n)
{
	int	i;
	int	j;
	int	**tab;

	i = 0;
	if(!(tab = malloc(n * sizeof(int*))))
		return ;
	while (i < n)
	{
		if(!(tab[i] = malloc(n * sizeof(int))))
		{
			while (i-- + 1)
				free(tab[i]);
			return ;
		}
		j = 0;
		while (j < n)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}


int	solve(int **tab, char *str, int pos)
{
	int	col;
	int	row;
	int	nb;

	if (pos == 4 * 4)
		return (1);
	row = pos / 4;
	col = pos % 4;
	if (tab[col][row] != 0)
		return (solve(tab, str, pos + 1));
	nb = 0;
	while (nb <= 4)
	{
			if (is_safe(tab, nb, pos) && is_valid(tab, str, pos))
			{
				tab[col][row] = nb;
				if (solve(tab, str, pos + 1))
					return (1);
			}
			nb++;
	}
	tab[col][row] = 0;
	return (0);
}

int	main(int argc, char *argv[])
{
	
	int	**tab;
	int i;
	if(!(tab = init_tab_to_0(4)));
	{
		free(tab);
		return (0);
	}
	if (argc != 2 || !check(argv[1]))
		ft_putstr("Error\n");
	else
	{
		if (solve(tab, argv[1], 0))
			print_tab(tab);
		else
			ft_putstr("Error\n");
	}
	while (i <= 4)
		free(tab[i++]);
	free(tab);
	return (0);
}
