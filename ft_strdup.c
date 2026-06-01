/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:00:09 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 17:27:36 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		size;

	size = ft_strlen(s);
	cpy = malloc(size + 1);
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s, size);
	cpy[size] = '\0';
	return (cpy);
}
// devuelve un puntero a un nuevo string que es un duplicado del de entrada s
// la memoria para el nuevo string se obtiene con malloc(3) y se libera con 
// free(3)

// 	cpy = malloc(sizeof(char) * (size + 1)) = malloc(size + 1);
// sizeof(char) porque el tamaño de los char siempre vale 1, 
// podría no usarlo y no cambiaría nada pero se 
// suele poner porque cuando reservas memorias para otros tipos, como por 
// ejemplo sizeof(int) que suele ser 4, sí es necesario.
// size será el tamaño del string a duplicar y nmemb será de la 

//compruebo que no ha habido fallos con !cpy
//usamos memcpy para copiar un string en el otro
// se reservó size+1 para finalizar con el '\0'

// Si no falla devuelve el puntero duplicado y si no hay memoria suficiente 
// devuelve null