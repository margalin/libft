/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 08:19:36 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 09:16:07 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
//calculo la potencia de 10 con la que estoy trabajando para saber cuantas
//cifras tengo. las funciones auxiliares tienen que ser estaticas

char	*ft_itoa(int n)
{
	char	*s;
	long	number;
	int		digit;

	number = n;
	digit = countdigits(number);
	s = malloc(digit + 1);
	if (!s)
		return (NULL);
	s[digit] = '\0';
	if (number < 0)
	{
		s[0] = '-';
		number = -number;
	}
	if (number == 0)
		s[0] = '0';
	while (number > 0)
	{
		digit--;
		s[digit] = (number % 10) + '0';
		number /= 10;
	}
	return (s);
}
// pasar de entero a char
// primero necesito saber como de largo es mi entero, para ello declaro 
// una función fuera para no pasarme de líneas. no puedo usar ni strlen que es
// para char, sizeof es el tamaño del tipo 1-char, 4-int
// al igual que en atoi, compruebo si es positivo o negativo para reservar signo
// evaluo el 0 por separado porque si no entro en bucle.
//le resto uno a digit ya que como lo que me da es la potencia de 10 con la que
//estoy, tengo que ir disminuyendola antes de dividir
//