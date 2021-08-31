/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:01:21 by rroland           #+#    #+#             */
/*   Updated: 2020/11/04 15:56:12 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	while (i < n)
	{
		if (a[i] == '\0' && b[i] == '\0')
			return (0);
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
