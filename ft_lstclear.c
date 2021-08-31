/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:28:14 by rroland           #+#    #+#             */
/*   Updated: 2020/11/12 18:16:28 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	if (lst != NULL || *lst != NULL || del != NULL)
	{
		a = *lst;
		while (a)
		{
			b = a->next;
			del(a->content);
			free(a);
			a = b;
		}
		*lst = NULL;
	}
}
