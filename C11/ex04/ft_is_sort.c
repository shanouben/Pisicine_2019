/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:54:24 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/19 21:54:38 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int			i;
	long		tmp;
	long		tmp1;

	if (length < 2)
		return (1);
	i = 0;
	tmp = f(tab[i], tab[i + 1]);
	tmp1 = 0;
	while (i < length - 1)
	{
		tmp1 = f(tab[i], tab[i + 1]);
		if (tmp == 0)
			tmp = tmp1;
		if (tmp * tmp1 < 0)
			return (0);
		i++;
	}
	return (1);
}
