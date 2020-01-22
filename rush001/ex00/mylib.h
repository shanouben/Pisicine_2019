/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:04:38 by hthomas           #+#    #+#             */
/*   Updated: 2019/09/07 17:13:33 by callain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		is_safe(int **tab, int nb, int pos);
int		is_valid(int **tab, char *str, int pos);
void	print_tab(int **tab);
int		**init_tab_to_0(int n);
int		check(char *str);

#endif
