/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:40:46 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 10:40:46 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int d, size_t l);
void	ft_bzero(void *s, size_t l);
void	*ft_memcpy(void *d, const void *s, size_t ld);
void	*ft_memmove(void *d, const void *s, size_t ls);
size_t	ft_strlcpy(char *d, const char *s, size_t l);
size_t	ft_strlcat(char *dst, const char *src, size_t l);
#endif