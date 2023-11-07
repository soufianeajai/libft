/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:41:45 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:49:25 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			pos;

	pos = 0;
	str = (unsigned char *)s;
	while (pos < n)
	{
		if (str[pos] == (unsigned char)c)
			return ((unsigned char *)s + pos);
		pos++;
	}
	return (0);
}
/*
int	main()
{
	const unsigned char s[] = "12345";
	printf("%p\n", ft_memchr(s, '1', 7));
	printf("%p\n", memchr(s, '1', 7));
}
*/
