/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:16:18 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:04:21 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	int		len;
	int		i;

	len = (int)ft_strlen(s1);
	i = 0;
	s1_copy = malloc(len + 1);
	if (!s1_copy)
		return (0);
	while (*s1)
		s1_copy[i++] = *s1++;
	s1_copy[i] = '\0';
	return (s1_copy);
}
/*
int main()
{
	const char *s1 = "";
	printf("%s\n", ft_strdup(s1));
	printf("%s\n", strdup(s1));
}
*/
