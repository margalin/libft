/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:10:17 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 09:10:17 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int letter)
{
	if ((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90))
	{
		return (1);
	}
	return (0);
}

//si el valor introducido es una letra devuelve 1