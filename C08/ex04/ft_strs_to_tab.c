/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 00:18:46 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/17 00:20:46 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int			i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char		*tab;

	tab = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (tab != NULL)
	{
		ft_strcpy(tab, src);
		return (tab);
	}
	return (NULL);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *strs;

	i = 0;
	if (!ac)
	{
		strs = malloc(sizeof(char) * 1);
		strs[0].str = 0;
		return (strs);
	}
	if (!(strs = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		strs[i].str = av[i];
		strs[i].size = ft_strlen(strs[i].str);
		strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs[i].str = 0;
	return (strs);
}
