#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	if(n > 0)
	{
		while (i < n)
			ptr[i++] = 0;
	}
}


#include<stdio.h>
#include<string.h>
int main()
{
	char	f[] = "123456";
	char	f1[] = "123456";
	ft_bzero(f, 1);
	bzero(f1, 1);
	printf("%s\n", f+1);
	printf("%s\n", f1+1);
}

