/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:07:30 by rroland           #+#    #+#             */
/*   Updated: 2020/11/09 16:13:57 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;
	size_t	a;

	if (s == 0 || f == 0)
		return (0);
	a = ft_strlen(s);
	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * (a + 1))))
		return (0);
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
