/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:04:44 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/10 19:18:29 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int c;

	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 1)
	{
		nb = c * nb;
		power--;
	}
	return (nb);
}
