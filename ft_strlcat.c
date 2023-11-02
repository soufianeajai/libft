#include"libft.h"

size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if(!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	space_left;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	space_left = dstsize - dst_len;
	if (space_left > 1)
	{
		while (src[src_len] && src_len < space_left - 1)
		{
			dst[dst_len + src_len] = src[src_len];
			src_len++;
		}
	}
	if (space_left > 0) // if there is no space we should not truncate dst.
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src)); // the return value is the total length of the string that would have been created if there were no size constraints
}



int main()
{
	int i  = 0;
	char src[] = "123456789";
	char *dst = malloc(10);
	char *dest = malloc(10);
	while (i < 4)
	{
		dst[i] = '0';
		dest[i++] = '0';
	}
	printf("dst before ft_strlcat : %s\n", dst);
	printf("dest before strlcat : %s\n", dest);
	printf("%lu -- %s\n", ft_strlcat(dst, src, 3), dst);
	printf("%lu -- %s\n", strlcat(dest, src, 3), dest);
}

