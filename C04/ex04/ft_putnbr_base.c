/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:53:39 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/10 17:34:52 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_charstr(char *base, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == c)
			j++;
		i++;
	}
	if (j > 1)
		return (1);
	return (0);
}

int		ft_check_base(char *base)
{
	int i;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (ft_charstr(base, base[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	taillebase;
	unsigned int	nb;

	if (ft_check_base(base))
		return ;
	taillebase = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= taillebase)
		ft_putnbr_base(nb / taillebase, base);
	ft_putchar(base[nb % taillebase]);
}
