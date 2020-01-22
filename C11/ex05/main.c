/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:38:15 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/19 21:48:39 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!ft_strcmp(av[2], "+"))
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "-"))
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "*"))
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "/"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "%"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	else
		ft_putstr("0");
	write(1, "\n", 1);
	return (1);
}
