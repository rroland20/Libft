/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:25:59 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 16:10:06 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*nol(void)
{
	char	*nol;

	nol = (char *)malloc(2);
	nol[0] = '0';
	nol[1] = 0;
	return (nol);
}

static size_t	ft_count(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*rec(int k, char *str, int n, int a)
{
	int l;

	l = ft_count(n);
	if (k == -1)
		l++;
	str[l] = '\0';
	while (l > 0)
	{
		if (a == -2147483648)
		{
			str[--l] = n % 10 + '1';
			n = n / 10;
			a++;
		}
		else
		{
			str[--l] = n % 10 + 48;
			n = n / 10;
		}
	}
	if (k == -1)
		str[l] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	int		k;
	char	*str;
	size_t	l;
	int		a;

	k = 1;
	l = ft_count(n);
	if (n == 0)
		return (nol());
	if (n == -2147483648 && (a = n))
		n++;
	if (n < 0)
	{
		l++;
		k = -1;
		n = n * k;
		if (!(str = (char *)malloc(sizeof(char) * ((l + 1)))))
			return (0);
		return (rec(k, str, n, a));
	}
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (0);
	return (rec(k, str, n, a));
}
