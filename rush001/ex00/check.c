/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:08:55 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/07 19:07:11 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_only_valid_number(char *str)
{
	int i;

	i = 0;
	while (str[i] && i < 32)
	{
		if (!(str[i] >= '1' && str[i] <= '4'))
			return (0);
		i += 2;
	}
	return (1);
}

int	is_space_fill(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i += 2;
	}
	return (1);
}

int	check(char *str)
{
	if (ft_strlen(str) != 31)
		return (0);
	if (!(is_space_fill(str)))
		return (0);
	if (!is_only_valid_number(str))
		return (0);
	return (1);
}
