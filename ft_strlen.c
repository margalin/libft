/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:11:26 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 09:11:26 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *strlen)
{
	size_t	l;

	l = 0;
	while (strlen[l] != '\0')
	{
		l++;
	}
	return (l);
}

//cuenta el numero de caracteres de un string