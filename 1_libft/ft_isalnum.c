#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    return (0);
}