/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:14:05 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 19:16:51 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end - 1 >= 0 && ft_strchr(set, s1[end - 1]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trimed_str = malloc(end - start + 1);
	if (!trimed_str)
		return (0);
	s1 = s1 + start;
	while (i < end - start)
		trimed_str[i++] = *s1++;
	trimed_str[i] = 0;
	return (trimed_str);
}
/*
int main()
{
	printf("%s\n",ft_strtrim("", "000"));
//	printf("%s\n",ft_strtrim(NULL, NULL));
}
*/
