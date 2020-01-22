/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:07:31 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/16 23:15:30 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (NULL);
	if ((tab = (int *)malloc(sizeof(int) * len)))
	{
		while (i < len)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
	return (NULL);
}
