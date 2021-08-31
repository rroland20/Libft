/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:56:59 by rroland           #+#    #+#             */
/*   Updated: 2020/11/02 19:10:25 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	dd = (unsigned char *)arr1;
	ss = (unsigned char *)arr2;
	while (i < n)
	{
		if (dd[i] != ss[i])
			return (dd[i] - ss[i]);
		i++;
	}
	return (0);
}
