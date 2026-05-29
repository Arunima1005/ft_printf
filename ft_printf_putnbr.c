/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:30:29 by archowdh          #+#    #+#             */
/*   Updated: 2026/04/02 12:55:26 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putnbr(int n)
{
	int		count;
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return (0);
	count = ft_printf_putstr(str);
	free(str);
	return (count);
}
