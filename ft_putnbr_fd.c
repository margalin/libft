/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 19:02:52 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 19:27:30 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}
// n: entero que se envia, fd: donde se escribe
// creamos una variable adicional para poder tener en cuenta los min con sign
// si el numero es negativo, separo signo y lo trato como positivo
// luego trato las potencias de 10 y despues las unidades
// no hace falta while number >= 10 porque es recursiva y vuelve a llamarse
