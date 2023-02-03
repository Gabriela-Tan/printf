/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:55:47 by gabriela          #+#    #+#             */
/*   Updated: 2023/02/02 12:57:10 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(size_t ptr, int *len)
{
	char	s[16];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) = (*len) + 2;
	if (ptr == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (ptr != 0)
	{
		s[i] = base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar(s[i], len);
	}
}
