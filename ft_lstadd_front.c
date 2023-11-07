/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:27:51 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/05 18:55:56 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	ft_lstadd_front(&head, new_node);
	t_list *curr = head;
    while (curr != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
	   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
