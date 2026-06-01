/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:22:43 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 17:04:17 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// reserva memoria para un array de nmemb elementos, cada uno de size bytes, 
//es decir, reserva nmemb*size. devuelve un puntero a la ubicación de memoria. 

// usando la libreria # include <stdint.h> puedo usar size_max y probar
// falla, tengo nmemb pero el tamaño a guardar es mayor que mi tamaño max
// tam max = tamaño maximo entre los elementos que tengo que repartir (pensarlo 
// como que luego voy a tener que multiplicar, size_max = size*nmemb)
// así protege contra overflow

// Si no falla, ya puedo usar malloc para reservar la memoria, pero con malloc 
// puedes tener basura, no tiene por que estar completa con 0s

// Compruebo si ha habido fallos al reservar memoria con malloc !ptr para poder 
// usar bzero

// Relleno el string ptr con size_max = nmemb*size 0s