#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	while (i < dstsize)
		dst[i++] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char src[] = "AAAAA";
	char src1[] = "AAAAA";
	char dest[] = "BBBBBBBBBB";	
	char dest1[] = "BBBBBBBBBB"; 	 
	printf("%lu -- %s\n", ft_strlcpy(dest, src, 3), dest);
	printf("%lu -- %s\n", strlcpy(dest1, src1, 3), dest1);
}
*/
