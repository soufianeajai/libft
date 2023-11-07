/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:59:59 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 15:56:44 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	signe;

	signe = 1;
	nbr = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (*str - '0') + (10 * nbr);
		str++;
	}
	return (signe * nbr);
}

/*
int main()
{
	const char *str = "  \n  \v  \r \f  \t -023hj99";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
*/
