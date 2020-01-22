/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:59:30 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/06 11:16:38 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int		majmin(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strupcase(str);
	while (str[i])
	{
		if ((majmin(str[i - 1]) == 1 || (str[i - 1] >= '0'
						&& str[i - 1] <= '9')) && (majmin(str[i]) == 1))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
