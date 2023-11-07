/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:46:13 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:42:06 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	space_left;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	space_left = dstsize - dst_len;
	if (space_left > 1)
	{
		while (src[src_len] && src_len < space_left - 1)
		{
			dst[dst_len + src_len] = src[src_len];
			src_len++;
		}
	}
	if (space_left > 0)
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src));
}
/*
int main()
{
	int i  = 0;
	char src[] = "123456789";
	char *dst = malloc(10);
	char *dest = malloc(10);
	while (i < 4)
{
		dst[i] = '0';
		dest[i++] = '0';
	}
	printf("%lu -- %s\n", ft_strlcat(dst, src, 14), dst);
	printf("%lu -- %s\n", strlcat(dest, src, 14), dest);
}
*/
