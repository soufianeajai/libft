/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:43:52 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 17:33:59 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			pos;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	pos = 0;
	while (pos < n)
	{
		if (str1[pos] != str2[pos])
		{
			if ((str1[pos] - str2[pos]) < 0)
				return (-((str1[pos] - str2[pos]) / (str1[pos] - str2[pos])));
			else
				return ((str1[pos] - str2[pos]) / (str1[pos] - str2[pos]));
		}
		pos++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_memcmp("\200", "\0", 1));
	printf("%d\n", memcmp("\200", "\0", 1));
}
*/
