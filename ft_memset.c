/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:08 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 09:11:08 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int value, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	aux = mem;
	i = 0;
	while (i < len)
	{
		aux[i] = (unsigned char) value;
		i++;
	}
	return (mem);
}
// coge un puntero a una localizacion de la memoria, 
//el valor por el que quiere cambiarlo y el numero de 
// bytes a cambiar (len) se declara un puntero auxiliar 
//para rellenar memset con el valor declarado durante 
// la longitud querida