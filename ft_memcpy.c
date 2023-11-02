#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
	char dst[] = "0123456";
	char dst1[] = "0123456";
	ft_memcpy(dst, "987",4);
	memcpy(dst1, "987", 4);
	printf("%s\n", dst+4);
	printf("%s\n", dst1+4);
}
*/
