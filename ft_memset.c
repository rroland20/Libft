/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:55:36 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 16:10:47 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = destination;
	i = 0;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (destination);
}
