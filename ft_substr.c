/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:47 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:05:39 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*substring;

	if (!s)
		return (0);
	if (start > ft_strlen((char *)s))
		len = 0;
	index = 0;
	substring = malloc(sizeof(char const) * (len + 1));
	if (!substring)
		return (0);
	while (s[start + index] && index < len)
	{
		substring[index] = s[start + index];
		index++;
	}
	substring[index] = 0;
	return (substring);
}
/*
int main()
{
	printf("%s\n", ft_substr("0123456789", 15, 5));
}
*/
