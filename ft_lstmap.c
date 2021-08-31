/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroland <rroland@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 19:20:42 by rroland           #+#    #+#             */
/*   Updated: 2020/11/15 19:32:24 by rroland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_lst1;
	t_list	*list;

	if (!lst || !f)
		return (NULL);
	new_lst = lst;
	list = NULL;
	while (new_lst)
	{
		new_lst1 = ft_lstnew(f(new_lst->content));
		if (!new_lst1)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new_lst1);
		new_lst = new_lst->next;
	}
	return (list);
}
