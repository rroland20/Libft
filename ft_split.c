/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:17:00 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 16:04:37 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**my_free(char **my_mass, int word)
{
	int i;

	i = 0;
	while (i < word)
	{
		free(my_mass[i]);
		i++;
	}
	free(my_mass);
	return (0);
}

static int		len_str(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char		**filling(char const *s, int word, char c, char **mass)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < word)
	{
		while (s[k] == c)
			k++;
		if (!(mass[i] = (char *)malloc(sizeof(char) * (len_str(&s[k], c) + 1))))
			return (my_free(mass, word));
		j = 0;
		while (s[k] != c && s[k] != '\0')
		{
			mass[i][j] = s[k];
			j++;
			k++;
		}
		mass[i][j] = 0;
		i++;
	}
	return (mass);
}

static int		podschet(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

char			**ft_split(char const *s, char c)
{
	char	**my_mass;
	int		slova;

	if (s == 0)
		return (0);
	slova = podschet(s, c);
	if (!(my_mass = (char **)malloc(sizeof(char *) * (slova + 1))))
		return (0);
	my_mass[slova] = 0;
	my_mass = filling(s, slova, c, my_mass);
	return (my_mass);
}
