/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:20 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 10:22:29 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t ldst)
{
	size_t	i;
	size_t	lsrc;

	i = 0;
	lsrc = ft_strlen(src);
	if (ldst < 1)
	{
		return (lsrc);
	}
	while (src[i] != '\0' && i < (ldst - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lsrc);
}

// copia el string apuntado por src en el buff apuntado
// por dst incluyendo el valor nulo, devuelve el tamaño 
// de src en memmcpy te dan la longitud src y aqui en 
// la longitud dst