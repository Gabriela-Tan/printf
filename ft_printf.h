/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabtan <gabtan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:59:33 by gabtan            #+#    #+#             */
/*   Updated: 2023/01/27 13:23:59 by gabtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);
void	ft_putchar(char c, int *len);
void	ft_puts(char *args, int *len);
void	ft_putptr(size_t ptr, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putu(unsigned int n, int *len);
void	ft_puthex(unsigned int n, int *len);
void	ft_puthexup(unsigned int n, int *len);

#endif
