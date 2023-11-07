/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:11:42 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/06 12:48:06 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*nextnode;

	if (!*lst || !del)
		return ;
	curr = *lst;
	nextnode = 0;
	while (curr->next)
	{
		nextnode = curr->next;
		ft_lstdelone(curr, del);
		curr = nextnode;
	}
	ft_lstdelone(curr, del);
	*lst = 0;
}
/*
void	del(void *s)
{
	char	*ptr;

	if (!s)
		return ;
	ptr = (char *)s;
	ptr[0] = 0;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || del)
		return;
	del (lst->content);
	free(lst);
}

int main()
{
	t_list *head = ft_lstnew("0");
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");

	head->next = node1;
	node1->next = node2;
	node2->next = 0;
	ft_lstclear(&head, del);
	t_list *curr = head;
    while (curr != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
	   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
