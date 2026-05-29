/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:29:43 by archowdh          #+#    #+#             */
/*   Updated: 2026/04/03 19:42:52 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

# define HEX_UPPER_BASE "0123456789ABCDEF"
# define HEX_LOWER_BASE "0123456789abcdef"

int	ft_printf_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_printf_putstr(char *s);
int	ft_printf_putnbr(int c);
int	ft_printf_puthex(unsigned long n, char *base);
int	ft_printf_putptr(void *ptr, char *base);
int	ft_printf_putunsign(unsigned int num);
#endif