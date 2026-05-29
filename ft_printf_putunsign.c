/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putunsign.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:22:27 by archowdh          #+#    #+#             */
/*   Updated: 2026/04/02 12:45:35 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putunsign(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
		count += ft_printf_putunsign(num / 10);
	count += ft_printf_putchar((num % 10) + '0');
	return (count);
}
