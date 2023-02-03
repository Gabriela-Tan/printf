/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:51:22 by gabriela          #+#    #+#             */
/*   Updated: 2023/02/01 07:49:36 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puts(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (args == NULL)
	{
		write(1, "(null)", 6);
		(*len) = (*len) + 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putchar(args[i], len);
		i++;
	}
}
