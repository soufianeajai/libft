/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:45:40 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:38:06 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n--)
		*dst1++ = *src1++;
	return (dst);
}

/*
int main()
{
	char dst[] = "123456789";
	char dst1[] = "123456789";
//	char *dst = NULL;
	ft_memcpy(dst, "000",4);
	memcpy(dst1, "000", 4);
	printf("%s -- %s\n", dst, dst + 4);
	printf("%s -- %s\n", dst1, dst1 + 4);
}
*/
