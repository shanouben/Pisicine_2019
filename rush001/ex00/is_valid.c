/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:25:09 by hthomas           #+#    #+#             */
/*   Updated: 2019/09/07 18:25:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int		is_valid_col_up(int **tab, char *str, int pos)
{
	int	cpt;
	int	col;
	int	i;
	int	max_height;

	col = pos % 4;
	i = 0;
	cpt = 1;
	max_height = tab[col][i];
	while (i < 4)
	{
		if (i != pos / 4 || tab[col][i] > max_height)
		{
			cpt++;
			max_height = tab[col][i];
		}
		if (cpt > str[col * 2])
			return (0);
		i++;
	}
	return (1);
}

int		is_valid_col_down(int **tab, char *str, int pos)
{
	int	cpt;
	int	col;
	int	i;
	int	max_height;

	col = pos % 4;
	i = 3;
	cpt = 1;
	max_height = tab[col][i];
	while (i >= 0)
	{
		if (i != pos / 4 || tab[col][i] > max_height)
		{
			cpt++;
			max_height = tab[col][i];
		}
		if (cpt > str[(col * 2) + 8])
			return (0);
		i--;
	}
	return (1);
}

int		is_valid_row_left(int **tab, char *str, int pos)
{
	int	cpt;
	int	row;
	int	i;
	int	max_height;

	row = pos / 4;
	i = 0;
	cpt = 1;
	max_height = tab[i][row];
	while (i < 4)
	{
		if (i != pos % 4 || tab[i][row] > max_height)
		{
			cpt++;
			max_height = tab[i][row];
		}
		if (cpt > str[(row * 2) + 16])
			return (0);
		i++;
	}
	return (1);
}

int		is_valid_row_right(int **tab, char *str, int pos)
{
	int	cpt;
	int	row;
	int	i;
	int	max_height;

	row = pos / 4;
	i = 3;
	cpt = 1;
	max_height = tab[i][row];
	while (i >= 0)
	{
		if (i != pos % 4 || tab[i][row] > max_height)
		{
			cpt++;
			max_height = tab[i][row];
		}
		if (cpt > str[(row * 2) + 24])
			return (0);
		i--;
	}
	return (1);
}

int		is_valid(int **tab, char *str, int pos)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = is_valid_col_up(tab, str, pos);
	j = is_valid_col_down(tab, str, pos);
	k = is_valid_row_left(tab, str, pos);
	l = is_valid_row_right(tab, str, pos);
	return (i && j && k && l);
}
