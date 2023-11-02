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
/*
int main()
{
	printf("%zu\n", ft_strlen("1111"));
}
*/
