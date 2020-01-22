/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:31:33 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/06 13:40:20 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0) ;
	}
	while (av[i] != '\0')
		i++;
	ft_putstr(av[i -1]);
}	
		
