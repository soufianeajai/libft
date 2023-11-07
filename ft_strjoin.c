/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:51:34 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/06 17:58:14 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (0);
	if (s1)
		while (*s1)
			join[i++] = *s1++;
	if (s2)
		while (*s2)
			join[i++] = *s2++;
	join[i] = 0;
	return (join);
}
/*
int main()
{
	printf("%s\n", ft_strjoin("123", NULL));
}
*/
