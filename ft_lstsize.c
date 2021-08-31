/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:09:49 by rroland           #+#    #+#             */
/*   Updated: 2020/11/11 20:08:25 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		a;
	t_list	*b;

	b = lst;
	a = 0;
	if (b == NULL)
		return (0);
	while (b->next != NULL)
	{
		a++;
		b = b->next;
	}
	a++;
	return (a);
}
