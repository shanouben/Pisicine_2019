/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 00:11:53 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/15 18:48:29 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int checkav1(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int check2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else 
			return (0);

	}
	return (1);
}

int  main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (checkav1(av[1], av[1][i], i) == 1)
			write(1 , &av[1][i], 1);	
		i++;
	}
	while (av[2][j])
	{
		if (check2(av[1] , av[2][j]) == 1 && checkav1(av[2], av[2][j], j) == 1)
			write(1, &av[2][j], 1);
		j++;
	}
	write(1, "\n" , 1);
	return (0);
}

