/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:08 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/06 14:59:51 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*new_content;
	t_list	*temp;

	head = NULL;
	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (temp)
	{
		new_content = f(temp->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		temp = temp->next;
	}
	return (head);
}
/*
void	*ftt(void *s)
{
	char	*ptr;
	if (!s)
		return (0) ;
	ptr = (char *)s;
	ptr[0] = '9';
	return (s);
}

int main()
{
	char	*str0 = malloc(2);
	str0[0] = '0';
	str0[1] = '\0';
	char	*str1 = malloc(2);
	str1[0] = '1';
	str1[1] = '\0';
	char	*str2 = malloc(2);
	str2[0] = '2';
	str2[1] = '\0';

	t_list *head = ft_lstnew(str0);
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	
	head->next = node1;
	node1->next = node2;
	node2->next = 0;
	
	t_list	*temp = head;
	printf("old list : \n");
	 while (temp != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
(char *)temp->content, temp, temp->next);
       temp = temp->next;
	}
	t_list *curr = ft_lstmap(head, ftt, del);
	printf("New list : \n");
    while (curr != 0) {
       printf("content : %s || current_ptr : %p ||next : %p\n",\
			   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
