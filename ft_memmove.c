/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:00 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 10:19:19 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	unsigned char		*destination;
	const unsigned char	*source;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	destination = (unsigned char *) dst;
	source = (const unsigned char *) src;
	if (destination > source)
	{
		while (l--)
		{
			destination[l] = source[l];
		}
	}
	else
		ft_memcpy(destination, source, l);
	return (destination);
}
// copiar en destino dst el string apuntado como area de memoria src y 
//terminado por el valor nulo, devuelvo longitud destino
// a diferencia de memcpy = puede haber solapamiento. Si el destino es 
//mayor que el origen, copia src en dst
// creo punteros para almacenar parametros de entrada y poder comparar 
// las posiciones. mientras el tamaño de entrada sea distinto de 0, copio 
// lo src en dst