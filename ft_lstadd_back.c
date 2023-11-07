/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:07:29 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:14:53 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst || !new)
		return ;
	new->next = NULL;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}
/*
int main()
{
	t_list *head = ft_lstnew("0");
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *new_node = ft_lstnew("new_node");

	head->next = node1;
	node1->next = node2;
	node2->next = 0;
	ft_lstadd_back(&head, new_node);
	t_list *curr = head;
    while (curr != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
	   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
