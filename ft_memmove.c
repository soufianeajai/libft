/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:45:49 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:19:44 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 < dst1)
		while ((int)(--len) >= 0)
			dst1[len] = src1[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main() {
    char str[] = "0123456789";
    char str1[] = "0123456789";
    memmove(str + 3, str, 6);
    ft_memmove(str1 + 3, str1, 6);
    printf("%s\n", str);
    printf("%s\n", str1);
    return 0;
}
*/
