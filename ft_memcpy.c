/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:54:41 by rroland           #+#    #+#             */
/*   Updated: 2020/11/04 15:12:49 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *p;
	unsigned char *o;

	p = (unsigned char *)destination;
	o = (unsigned char *)source;
	if (!n || destination == source)
		return (destination);
	while (n--)
	{
		*p = *((unsigned char *)source);
		p++;
		source++;
	}
	return (destination);
}
