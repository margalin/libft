/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:34:26 by margalin          #+#    #+#             */
/*   Updated: 2026/06/01 14:45:56 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;
	size_t			i;

	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (v1[i] != v2[i])
			return (v1[i] - v2[i]);
		i++;
	}
	return (0);
}
// compara areas de memoria para los primeros n bytes
// devuelve un entero
// s1 = s2 : 0, s1 < s2 : s1-s2 = <0, s1 > s2 : s1-s2 = >0