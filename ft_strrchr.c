/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:52:10 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:46:37 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	s = s + len;
	if (c == '\0')
		return ((char *)s);
	s--;
	while ((--len > 0) && *s != (char)c)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
int	main()
{
	printf("%s\n", ft_strrchr("1234554321", '5'));
	printf("%s\n", strrchr("123454321", '5'));
}
*/
