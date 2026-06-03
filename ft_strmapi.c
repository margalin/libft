/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 19:50:03 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 20:35:40 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*c;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
// aplica la funcion f a cada caracter de la cadena s, devuelve la cadena creada 
// tras aplicar f, NULL si falla memoria
// creamos c para guardar s despues de f y comprobamos que se ha creado bien
// mientras haya s, le aplicamos f y guardamos en c terminando en vacio