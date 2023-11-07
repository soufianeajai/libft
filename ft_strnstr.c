/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:54:19 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:55:15 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	len_needle;

	pos = 0;
	if (!needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (haystack[pos] && (len_needle + pos <= len) && \
			(ft_strncmp(needle, (haystack + pos), len_needle) != 0))
		pos++;
	if ((len_needle + pos <= len) && \
			ft_strncmp(needle, (haystack + pos), len_needle) == 0)
		return ((char *)(haystack + pos));
	return (0);
}
/*
int main()
{
	size_t n = 4;
	const char *needle = "999";
	const char *haystack = "9999012399945678999";
	printf("%p\n", ft_strnstr(haystack, needle, n));
	printf("%p\n", strnstr(haystack, needle, n));
}
*/
