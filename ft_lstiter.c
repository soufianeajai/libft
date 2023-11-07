/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:20:12 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/06 13:31:53 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	if (!lst || !f)
		return ;
	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}
}

/*
void	ft(void *s)
{
	char	*ptr;
	if (!s)
		return ;
	ptr = (char *)s;
	ptr[0] = '9';
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
	printf("Before applying the function : \n");
	 while (temp != 0) {
       printf("content : %s || current_ptr : %p || next : %p\n",\
(char *)temp->content, temp, temp->next);
       temp = temp->next;
	}

	ft_lstiter(head, ft);
	t_list *curr = head;
	printf("After applying the function : \n");
    while (curr != 0) {
       printf("content : %s || current_ptr : %p ||next : %p\n",\
			   (char *)curr->content, curr, curr->next);
       curr = curr->next;
	}
}
*/
