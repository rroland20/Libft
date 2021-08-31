/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:35:30 by rroland           #+#    #+#             */
/*   Updated: 2020/11/11 18:15:31 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*b;
	unsigned char	*l;
	int				i;
	int				j;

	i = 0;
	j = 0;
	b = (unsigned char *)big;
	l = (unsigned char *)little;
	if (*l == '\0')
		return ((char *)big);
	while (b[i] != '\0' && len)
	{
		while (l[j] != '\0' && b[i + j] == l[j] && (int)len != j)
			j++;
		if (l[j] == '\0')
			return ((char *)b + i);
		i++;
		len--;
		j = 0;
	}
	return (0);
}
