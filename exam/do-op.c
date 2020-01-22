/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:49:17 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/15 19:28:50 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_do_op(char *chiffre1, char *op, char *chiffre2)
{
	int i;
	int j;
	int c;

	i = atoi(chiffre1);
	j = atoi(chiffre2);
	if (op[0] == '+' )
	{
		c = i + j;
		printf("%d\n", c);
		//printf("c : %d\n i : %d\n j : %d\n", c, i, j);
	}
	if (op[0] == '*' )
	{
		c = i * j;
		write(1, &c, 1);
	}
	if (op[0] == '/' )
	{
		c = i / j;
		write(1, &c, 1);
	}
	if (op[0] == '%' )
	{
		c = i % j;
		write(1, &c, 1);
	}
}

int main(int ac, char **av)
{
	if (ac != 4 )
	{
		write(1, "\n" , 1);
		return (0);
	}

	ft_do_op(av[1], av[2], av[3]);
	return(0);
}
