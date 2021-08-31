/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:10:20 by rroland           #+#    #+#             */
/*   Updated: 2020/11/10 19:50:46 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char *dd;
	unsigned char *ss;

	dd = (unsigned char *)destination;
	ss = (unsigned char *)source;
	if (!dd && !ss)
		return (NULL);
	if (ss <= dd)
	{
		while (n--)
		{
			dd[n] = ss[n];
		}
	}
	else
		while (n--)
		{
			*dd = *ss;
			dd++;
			ss++;
		}
	return (destination);
}
