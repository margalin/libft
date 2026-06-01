/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:47:20 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 15:51:41 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// localizar un substring en string
// comprobar que el string a buscar no es vacio: en ese caso devuelve el grande
// mientras i sea menor que el tamaño de caracteres a buscar 
// si hay pequeño, es igual al grande y el tamaño sigue siendo más pequeño que 
// el que queremos buscar actualizo j, hago i + j para no actualizar el valor 
// de i y al salir del bucle poder saber cuál es el primer carácter que se
// repite y poder apuntar a él.