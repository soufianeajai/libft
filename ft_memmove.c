#include"libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 < dst1)
	{
		while ((int)(--len) >= 0)   // typecast because the type of len is size_t and will be always >= 0.
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*

int main() {
    char str[] = "Hello, World!";
    char str1[] = "Hello, World!";
    memmove(str + 2, str, 3);
    ft_memmove(str1 + 2, str1, 3);
    printf("%s\n", str);
    printf("%s\n", str1);
    return 0;
}
*/
