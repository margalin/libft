//ifndef si vamos a hacer la parte bonus para poder usar los mismos nombres
#ifndef libft_h
#define libft_h

#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int d, size_t l);
void *ft_bzero(void *s, size_t l);
void *ft_memcpy(char *d, const char *s, size_t ld);
void *ft_memmove(void *d, const void *s, size_t ls);
void *ft_strlcpy(char *d, const char *s, size_t l)



#endif