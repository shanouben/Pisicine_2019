/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:38:48 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/11 18:31:27 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int j;

	i = ac - 1;
	j = 0;
	while (i > 0)
	{
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		j = 0;
		i--;
		write(1, "\n", 1);
	}
	return (0);
}