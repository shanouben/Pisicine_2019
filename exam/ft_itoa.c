/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:43:32 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/19 23:15:15 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	taillemaloc(long int nbr)
{
	int i;
	long int j;

	i = 0;
	j = nbr;
	if (nbr < 0)
		i++;
	while (j > 0)
	{	
		j = j / 10;
		i++;
	}
	return (i);
}

int 1digit(long nbr)
{
	int i;
	int nb;

	i = 0;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
}
char *ft_itoa(int nbr)
{
	int i;
	int size;
	int res;
	int mod;
	char *tab;
	
	i = 0;
	mod = 0;
	res = 0;
	size =  taillemaloc(nbr);
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (0);
	tab[size] = '\0';
	while (tab[i])
	{
		res = nbr / 10;
		tab [i] = nbr % 10 + 48;
		nbr = res;
	}
	return (tab);
}

int main()
{
	printf("%s\n" , ft_itoa(1234));
	return (0);
}
