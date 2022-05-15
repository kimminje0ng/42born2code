#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*s;
	int		s_len;

	s = (char *)s1;
	s_len = ft_strlen(s) + 1;
	ptr = (char *)malloc(sizeof(char) * s_len);
	if (ptr)
		ft_strlcpy(ptr, s, s_len);
	return (ptr);
}
