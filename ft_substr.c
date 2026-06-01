/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:39:19 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 18:34:21 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	l;
	size_t	i;

	l = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > l)
		len = 0;
	if (len > l - start)
		len = l - start;
	sub = malloc (len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
//s:cadena original, start:indice desde el que empieza subcadena, 
//len:tamaño subc
//usamos NULL para los fallos de malloc

// Comprobamos todos los puntos en que la funcion puede fallar;
//1. si el punto a comenzar es mas grande que el tamaño del string a copiar, 
//la longitud que copiaremos sera 0, no podemos copiar nada
//2. si quiero copiar más espacio del que tengo disponible,la longitud a copiar
//es mayor que el tamaño del string, actualizamos para que el tamaño maximo a 
//copiar sea el tamaño del string, actualizamos l-start porque comenzamos a
//copiar desde start, entonces necesito que la longitud sea la total - desde
//donde empieza
// Usamos malloc para crear sub y comprobamos que no falle

// Recorremos s, copiando desde start y finalizando en nulo
