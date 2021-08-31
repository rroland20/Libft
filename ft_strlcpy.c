/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:22:26 by rroland           #+#    #+#             */
/*   Updated: 2020/11/03 19:58:09 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int a;
	int b;
	int i;

	i = 0;
	if (dst == 0)
		return (0);
	b = ft_strlen(dst);
	a = ft_strlen(src);
	if (size == 0)
		return (a);
	while (--size && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (a);
}
