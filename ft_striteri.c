/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:15:51 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/05 17:17:01 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
/*
void f(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

int main() {
    char str[] = "0123456789";
    ft_striteri(str, (*f));
}
*/
