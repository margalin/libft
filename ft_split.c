/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 09:17:10 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 11:25:04 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
// cuento cuantas veces aparece c para saber cuantas divisiones tendré
// el tamaño del array y poder usar malloc
// primero salto mientras se repita el mismo char,si hay algo que no sea 
// c es que el siguiente char es palabra, si me sigue quedando s y el 
// siguiente char no es c es porque es de la misma palabra contada count

static void	*freed(char **memry, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}
// funcion externa para limpiar memoria si algo falla para que no halla
//leaks, ya que hacemos muchos malloc (uno para array de punteros y otro
// por palabra). nos sirve para asegurar que tendremos memoria y podremos
// liberarlas antes de devolver NULL para no perder esa memoria

static char	*wordsubstr(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_substr(s, 0, i));
}
//funcion externa para substraer la cadena entre los caracter c

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = counter(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		result[i] = wordsubstr(s, c);
		if (!result[i])
			return (freed(result, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	result[i] = NULL;
	return (result);
}
//s : cadena a dividir, c: cada vez que aparezca este char
// si no hay s, devuelvo NULL. con counter cuento las palabras para saber
// cuantos punteros reservar: words + 1 (el +1 es para el NULL final), y
// multiplico por sizeof(char *) porque reservo punteros, no bytes, entonces
// no es 1 como antes.
// salto los delimitadores, copio la palabra con wordsubstr y la guardo en 
// result[i], salto la palabra y avanzo i.
// si un malloc falla no devuelvo null, libero con freed libera lo ya reservado
// y freed ya devuelve NULL dentro de la funcion.
// cierro el array con NULL, para poder recorrerlo despues sin saber su tamaño.