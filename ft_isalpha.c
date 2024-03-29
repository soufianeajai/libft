/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:43:39 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/05 16:17:39 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int c)
{	
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return ('c');
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isalpha(4));
}
*/
