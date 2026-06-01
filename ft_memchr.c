/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:56:41 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 14:29:34 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	value;
	unsigned char	*str;
	size_t			i;

	i = 0;
	value = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == value)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
// escanea los n bytes de memoria apuntados por s en busca
// de la primera c. c y n son unsigned char
// devuelve puntero a al byte o NULL si no ocurre