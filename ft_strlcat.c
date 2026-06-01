/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:14 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 14:13:55 by margalin         ###   ########.fr       */
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
	if (l <= ldst)
		return (lsrc + l);
	i = 0;
	while (src[i] && (ldst + i + 1) < l)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (lsrc + ldst);
}
// Añade el string terminado en nulo src a dst y devuelve
// el tamaño total. Tamaño que será src+dst, l = tamaño
// destino buffer si el tamaño del dst=0, la longitud es
// la origen. si el dst es menor al origen, devuelvo el 
// origen más la longitud declara por entrada. si no, se
// recorre src hasta el nulo, se comprueba que el tamaño 
// del dst siga siendo 1 menor al de entrada, y el dst sea
// diferente al origen