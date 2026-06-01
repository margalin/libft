/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:48:59 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 19:05:07 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd (s[i], fd);
		i++;
	}
}
// envía la cadena s a fd
// como ft_putchar_fd recibia un caracter y un entero, reutilizamos iterando en
// el puntero de entrada s