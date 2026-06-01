/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:14 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 10:37:54 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	lsrc;
	size_t	ldst;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (ldst == 0)
		return (lsrc);
	if (ldst <= lsrc)
		return (lsrc + l);
	else
		lsrc += ldst;
	while (src[i] && ldst < (l - 1) && dst != src)
	{
		dst[ldst] = src[i];
		i++;
		ldst++;
	}
	dst[ldst] = '\0';
	return (lsrc);
}
// Añade el string terminado en nulo src a dst y devuelve
// el tamaño total. Tamaño que será src+dst, l = tamaño
// destino buffer si el tamaño del dst=0, la longitud es
// la origen. si el dst es menor al origen, devuelvo el 
// origen más la longitud declara por entrada. si no, se
// recorre src hasta el nulo, se comprueba que el tamaño 
// del dst siga siendo 1 menor al de entrada, y el dst sea
// diferente al origen