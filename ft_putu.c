/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:22:13 by gabriela          #+#    #+#             */
/*   Updated: 2023/02/03 05:53:12 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putu(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putu(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else
		ft_putchar(n + '0', len);
}
