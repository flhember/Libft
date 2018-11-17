/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:28:53 by flhember          #+#    #+#             */
/*   Updated: 2018/11/17 19:43:50 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*cpy;

	begin = f(lst);
	cpy = begin;
	while (lst)
	{
		lst = lst->next;
		cpy->next = f(lst);
		cpy = cpy->next;
	}
	return (begin);
}
