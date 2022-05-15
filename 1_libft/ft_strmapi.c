#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	idx;

	if (!s || !f)
		return (0);
	ret = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!ret)
		return (0);
	idx = 0;
	while (s[idx])
	{
		ret[idx] = f(idx, s[idx]);
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
