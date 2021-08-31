/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:01:34 by rroland           #+#    #+#             */
/*   Updated: 2020/11/12 21:12:23 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	lst1 = *lst;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		lst1 = ft_lstlast(*lst);
		lst1->next = new;
	}
}
