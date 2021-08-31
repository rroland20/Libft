/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:40:39 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 19:22:51 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		vsp(unsigned char *ss, int *k)
{
	int i;

	i = 0;
	while (ss[i] == '\t' || ss[i] == '\n' || ss[i] == '\v'
			|| ss[i] == '\f' || ss[i] == '\r' || ss[i] == ' ')
		i++;
	if (ss[i] == '+')
		i++;
	else if (ss[i] == '-')
	{
		*k = -1;
		i++;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	unsigned char	*ss;
	int				res;
	int				i;
	int				k;
	int				r;

	res = 0;
	k = 1;
	r = 0;
	ss = (unsigned char *)str;
	i = vsp(ss, &k);
	while (ss[i] >= '0' && ss[i] <= '9')
	{
		res = res * 10 + (ss[i] - '0');
		i++;
		if (res != 0)
		{
			r++;
			if (r > 19 && k > 0)
				return (-1);
			if (r > 19 && k < 0)
				return (0);
		}
	}
	return (res * k);
}
