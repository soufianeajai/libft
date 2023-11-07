/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:05:30 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/05 19:05:43 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*curr;

	len = 0;
	curr = lst;
	while (curr)
	{
		curr = curr->next;
		len++;
	}
	return (len);
}
/*
int main()
{
	t_list *head = ft_lstnew("0");
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = 0;
	printf("%d\n", ft_lstsize(head));
}
*/
