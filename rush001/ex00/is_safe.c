/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:48:50 by callain           #+#    #+#             */
/*   Updated: 2019/09/07 18:14:39 by callain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_safe(int **tab, int nb, int pos)
{
	int row;
	int col;
	int i;

	row = pos / 4;
	col = pos % 4;
	i = 0;
	while (i < 4)
	{
		if (tab[col][i] == nb)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (tab[i][row] == nb)
			return (0);
		i++;
	}
	return (1);
}
