/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:46:01 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 17:31:38 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
//	char src[] = "AAAAA";
//	char src1[] = "AAAAA";
//	char dest[] = "BBBBBBBBBB";	
	char dest1[] = "BBBBBBBBBB"; 	 
	printf("%lu -- %s\n", ft_strlcpy(dest, src, 2), dest);
	printf("%lu -- %s\n", strlcpy(dest1, src1, 2), dest1);
}
*/
