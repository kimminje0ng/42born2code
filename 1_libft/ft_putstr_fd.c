#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	if (fd >= 0)
	{
		while (s[i])
		{
			c = s[i++];
			write(fd, &c, 1);
		}
	}
	return ;
}
