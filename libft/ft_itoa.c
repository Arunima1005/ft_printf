/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:52:49 by archowdh          #+#    #+#             */
/*   Updated: 2026/03/12 19:31:20 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal_len_num(long n)
{
	int	i;
	int	sign;

	sign = 0;
	i = 0;
	if (n <= 0)
		sign += 1;
	while (n)
	{
		n = n / 10;
		i ++;
	}
	return (i + sign);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	len = cal_len_num(num);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len --] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
