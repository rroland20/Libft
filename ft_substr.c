/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:59:56 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 16:15:12 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*podstroka;
	unsigned char	*stroka;
	int				i;

	i = 0;
	stroka = (unsigned char *)s;
	if (stroka == 0)
		return (0);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (!(podstroka = (unsigned char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	podstroka[len] = '\0';
	return (ft_memcpy(podstroka, &stroka[start], len));
}
