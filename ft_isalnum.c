/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:10:13 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 09:10:13 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alnum)
{
	if (ft_isalpha(alnum) || ft_isdigit(alnum))
		return (1);
	return (0);
}
// si el valor introducido es letra o numero devuelve 1