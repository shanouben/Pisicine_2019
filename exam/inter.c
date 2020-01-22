/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:50:34 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/15 18:25:48 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int pos)
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

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	j = 0;
	while (av[1][i])
	{
		if (check(av[1], av[1][i], i) == 1)
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					write(1, &av[1][i], 1);
					break ;	
				}
				j++;
			}
			j = 0;
		
		}
		i++;
	}
	return (0);
}
