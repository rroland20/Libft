/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:53:53 by rroland           #+#    #+#             */
/*   Updated: 2020/11/03 16:16:05 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *a;

	a = (unsigned char *)arr;
	while (n--)
	{
		if (*a == (unsigned char)c)
			return (a);
		a++;
	}
	return (NULL);
}
