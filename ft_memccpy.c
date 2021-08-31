/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:09:20 by rroland           #+#    #+#             */
/*   Updated: 2020/11/03 15:02:55 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char *ddd;
	unsigned char *sss;

	ddd = (unsigned char *)destination;
	sss = (unsigned char *)source;
	while (n--)
	{
		*ddd = *sss;
		if (*sss == (unsigned char)c)
		{
			return (++ddd);
		}
		ddd++;
		sss++;
	}
	return (NULL);
}
