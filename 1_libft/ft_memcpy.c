#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*s;
	size_t	i;

	if (dst == src)
		return (dst);
	tmp = dst;
	s = (char *)src;
	i = 0;
	while (n--)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
