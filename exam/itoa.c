/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:43:32 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/20 00:51:36 by karibenn         ###   ########.fr       */
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
	{
		j = -nbr;
		i++;
	}
	while (j > 0)
	{	
		j = j / 10;
		i++;
	}
	return (i);
}

int  ft_carac(long int nbr)
{
	int i;
	char c;

	i = 0;
	while (nbr >= 10)
		nbr = nbr % 10;
	return (nbr);
}

char *ft_itoa(int numero)
{
	int i;
	int size;
	int signe;
	char *tab;
	long int nbr;

	nbr = numero;
	signe = 0;
	size =  taillemaloc(nbr);
	i = size - 1;
	if (nbr < 0)
    {
        nbr = -nbr;
        signe = 1;
    }
	printf("nbr%d\n", nbr);
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (0);
	tab[size] = '\0';
	while (i >= (0 + signe))
	{
		tab[i] = ft_carac(nbr) + '0';
		i--;
		nbr = nbr / 10;
	}
	if (signe == 1)
		tab[0] = '-';
	return (tab);
}

int main()
{
	printf("%s\n" , ft_itoa(-2147483648));
	return (0);
}
