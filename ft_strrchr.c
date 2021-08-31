/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:03:10 by rroland           #+#    #+#             */
/*   Updated: 2020/11/03 16:54:45 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*ss;
	size_t	i;

	i = 0;
	ss = (char *)str;
	while (*ss != '\0')
	{
		ss++;
		i++;
	}
	i++;
	while (i--)
	{
		if (*ss == (char)ch)
		{
			return (ss);
		}
		ss--;
	}
	return (NULL);
}
