#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *ptr ;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
		ptr[i++] = c;
	return (b);
}
/*
int main()
{
	char	b[] = "1234";
	char	a[] = "1234";
	ft_memset(a, 48, 2);
	memset(b, 48, 2);
	printf("%s\n", b);
	printf("%s\n", a);
}
*/
