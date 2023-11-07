/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:02 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:49:07 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			if ((str1[i] - str2[i]) < 0)
				return (- (str1[i] - str2[i]) / (str1[i] - str2[i]));
			else
				return ((str1[i] - str2[i]) / (str1[i] - str2[i]));
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_strncmp("01234567", "0123456", 0));
	printf("%d\n", strncmp("01234567", "0123456", 0));
}
*/
