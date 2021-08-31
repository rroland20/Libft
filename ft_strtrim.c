/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:51:43 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 19:24:22 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sprava(size_t k, char const *s1, char const *set)
{
	int		j;

	j = 0;
	k--;
	while (set[j] != '\0' && k != 0)
	{
		if (s1[k] == set[j])
		{
			j = 0;
			k--;
		}
		else
			j++;
	}
	return (k);
}

static int		sleva(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		res;
	int		pes;
	size_t	a;
	char	*ss;

	if (s1 == 0 || set == 0)
		return (0);
	a = ft_strlen(s1);
	pes = sprava(a, s1, set);
	if (pes == 0)
		return (ft_strdup(""));
	res = sleva(s1, set);
	ss = ft_substr(s1, res, pes - res + 1);
	return (ss);
}
