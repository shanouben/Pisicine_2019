/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:32:52 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/18 17:34:48 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_nbr(int nb)
{
	int r;

	r = nb % 10;
	if (nb / 10 != 0)
		ft_write_nbr(nb / 10);
	ft_putchar(r + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, &"-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			nb = -nb;
		}
		ft_write_nbr(nb);
		ft_putchar('\n');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	if (!par)
		return ;
	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
