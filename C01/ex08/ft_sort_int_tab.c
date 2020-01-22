/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:03:20 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/05 01:05:22 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int min;
	int j;
	int k;

	i = 0;
	while (i < size)
	{
		min = tab[i];
		k = i;
		j = size - 1;
		while (j > 1)
		{
			if (min > tab[j])
			{
				min = tab[j];
				k = j;
			}
			j--;
		}
		tab[k] = tab[i];
		tab[i] = min;
		i++;
	}
}
