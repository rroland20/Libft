/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:52:44 by rroland           #+#    #+#             */
/*   Updated: 2020/12/01 17:43:29 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	size_t	a;
	int		i;

	i = -1;
	if (!str)
		return (0);
	a = ft_strlen(str);
	if (!(res = (char *)malloc(sizeof(char) * (a + 1))))
		return (0);
	while (str[++i] != 0)
		res[i] = str[i];
	res[i] = 0;
	return (res);
}
