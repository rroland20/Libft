/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:08:17 by rroland           #+#    #+#             */
/*   Updated: 2020/12/01 17:43:20 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	char	*res;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	a = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = (char *)malloc(sizeof(char) * (a + 1))))
		return (0);
	while (s1[++j] != 0)
		res[j] = s1[j];
	while (s2[++i] != 0)
		res[j + i] = s2[i];
	res[j + i] = 0;
	return (res);
}
