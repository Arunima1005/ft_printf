/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archowdh <archowdh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:33:32 by archowdh          #+#    #+#             */
/*   Updated: 2026/03/12 15:45:56 by archowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || s[start] == '\0')
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		slen = ft_strlen(s) - start;
	else
		slen = len;
	substr = malloc(sizeof(char) * (slen + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (s + start), slen + 1);
	return (substr);
}
