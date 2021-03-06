/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:40:58 by karibenn          #+#    #+#             */
/*   Updated: 2019/09/06 13:49:18 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char s2[] = "momo";
	char s1[] = "8l9o88555555";
	printf("MIENNE : %s\n", ft_strcpy(s1, s2));
	printf("VRAI : %s\n", strcpy(s1, s2));
}
