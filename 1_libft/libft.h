#ifndef LIBFT_H
#define LIBFT_H

typedef unsigned int size_t;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isprint(int c);

size_t ft_strlen(const char *str);
size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);


#endif LIBFT_H