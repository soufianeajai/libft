/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:11:38 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:13:30 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list *head = ft_lstnew("0");
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");
	t_list	*last_node;

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = 0;
	last_node = ft_lstlast(head);
	printf("content : %s || next : %p\n", last_node->content, last_node->next);
}
*/
