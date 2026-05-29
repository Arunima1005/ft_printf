/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:00:10 by archowdh          #+#    #+#             */
/*   Updated: 2026/04/02 12:57:54 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putptr(void *ptr, char *base)
{
	int	count;

	if (!ptr)
		return (ft_printf_putstr("(nil)"));
	count = 0;
	count += ft_printf_putstr("0x");
	count += ft_printf_puthex((unsigned long)ptr, base);
	return (count);
}
