/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:32:11 by gabriela          #+#    #+#             */
/*   Updated: 2023/02/02 12:52:40 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup(unsigned int n, int *len)
{
	char	s[8];
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		s[i] = base [n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(s[i], len);
}
