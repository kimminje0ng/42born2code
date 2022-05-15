#include "libft.h"

static int	find_match(const char *str, const char *substr, size_t len, int j)
{
	int		i;
	int		len_sub;

	i = 0;
	len_sub = 0;
	while (substr[len_sub])
		len_sub++;
	while (str[j] && substr[i] && ((size_t)j < len) && str[j] == substr[i])
	{
		i++;
		j++;
	}
	if (i == len_sub)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		flag;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			flag = find_match(haystack, needle, len, i);
			if (flag == 1)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
