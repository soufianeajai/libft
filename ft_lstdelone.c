/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:45:44 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:15:32 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free(lst);
	lst = 0;
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

int main()
{
	char	*str = malloc(2);
	str[0] = '1';
	str[1] = '\0';
	t_list *head = ft_lstnew("0");
	t_list *node1 = ft_lstnew(str);
	t_list *node2 = ft_lstnew("2");

	head->next = node1;
	node1->next = node2;
	node2->next = 0;
	ft_lstdelone(node1, del);
	t_list *curr = head;
    while (curr != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
	   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
