/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 07:09:44 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 07:47:03 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	else
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && ft_strchr(set, s1[j - 1]))
			j--;
	}
	s2 = malloc(j - i + 1);
	if (!s2)
		return (NULL);
	if (s2)
		ft_strlcpy(s2, &s1[i], j - i + 1);
	return (s2);
}
//reserva memoria con malloc y devuelve una copia de s1 con los caracteres de
//set eliminados al principio y al final. i avanza, j retrocede
//me voy al principio de la cadena s1 y busco que coincidan los valores de set
//caracter a caracter para poder eliminarlos si estan y luego lo mismo pero 
//recorriendo el string al reves
// El tamaño de mi cadena final será el total (j) al que le hemos recortado el 
//final - lo que hemos recortado al principio i 
// Usamos ft_strlcpy para copiar los strings pero teniendo en cuenta que debe 
//empezar por start, por lo que le mandamos como origen el puntero a donde 
//empieza la copia de la cadena