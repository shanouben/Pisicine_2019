/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:37:18 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/06 14:52:59 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while(j >= i)
	{
		ft_putchar(str[j]);
		j--;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	rev_print(av[1]);
	return (0);
}
