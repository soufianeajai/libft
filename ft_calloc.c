/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:15:25 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/07 16:01:30 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (count == 0 || size == 0)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < count * size)
		ptr[i++] = 0;
	return (ptr);
}

/*
int main() 
{
    size_t nbr_elems = 0;
    size_t size = 0;
   // size_t size = sizeof(char);
	size_t i = 0;

    char *my_ptr = ft_calloc(nbr_elems, size);
    char *ptr = calloc(nbr_elems, size);
    while (i < nbr_elems)
		my_ptr[i++] = '1';
	i = 0;
    while (i < nbr_elems)
		ptr[i++] = '1';
    printf("%d", memcmp(my_ptr, ptr, nbr_elems * size));
}
*/
