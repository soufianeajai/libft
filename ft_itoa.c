/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:18:19 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 18:05:35 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_len(int nbr)
{
	int		len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				nbr_elements;
	long			nbr;

	nbr = n;
	nbr_elements = my_len(n);
	str = (char *)malloc(nbr_elements + 1);
	if (!str)
		return (0);
	str[nbr_elements] = 0;
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{	
		nbr = -nbr;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		str[--nbr_elements] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}
/*
int main()
{
	printf("%s\n", ft_itoa(0));		
}
*/
