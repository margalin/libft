/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:39:04 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 19:05:20 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
//envía el carácter c al descriptor del archivo fd sobre el que escribir
//fd normales suelen ser 1: salida estandar (terminal), 2: salida error
//&c necesitamos un puntero a la dirección en que está el caracter no este en si
//como lo que quiero escribir es un char, solo necesito 1 byte