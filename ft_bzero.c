/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:45:33 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:37:12 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	if (n > 0)
		while (i < n)
			ptr[i++] = 0;
}

/*
int main()
{
	char	f[] = "123456";
	char	f1[] = "123456";
	size_t n = 3;
	ft_bzero(f, n);
	bzero(f1, n);
	printf("%s -- %s\n", f, f+n);
	printf("%s -- %s\n", f1, f1+n);
}
*/
