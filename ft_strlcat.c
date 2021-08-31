/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:15:15 by rroland           #+#    #+#             */
/*   Updated: 2020/11/07 20:07:19 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		a;
	size_t	b;
	int		n;

	if (src == 0 && dst == 0)
		return (0);
	a = ft_strlen(src);
	b = ft_strlen(dst);
	n = b;
	if (size == 0)
		return (a);
	if (size <= b)
		return (size + a);
	while (b + 1 < size-- && *src != 0)
	{
		dst[n] = *src;
		n++;
		src++;
	}
	dst[n] = '\0';
	return (a + b);
}
