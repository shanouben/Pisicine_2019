/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:21:42 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/07 22:02:21 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[len])
		len++;
	if (size <= i)
		len = len + size;
	else
		len = len + i;
	while (src[j] && ((i + 1) < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
