/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:33:36 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/11 18:34:38 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int min;

	j = 0;
	while (j < ac - 1)
	{
		min = 1;
		i = 1;
		while (i < ac)
		{
			if (ft_strcmp(av[min], av[i]) > 0)
				min = i;
			i++;
		}
		ft_putstr(av[min]);
		write(1, "\n", 1);
		av[min][0] = 127;
		j++;
	}
	return (0);
}
