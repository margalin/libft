/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 07:16:36 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 07:35:32 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nodes;

	nodes = 0;
	while (lst)
	{
		nodes++;
		lst = lst -> next;
	}
	return (nodes);
}
//cuenta el numero de nodos de la lista
//inicializo cuenta a 0, mientras tenga nodos en la lista, actulizo el contador
//y el valor inicial de la lista pasará a ser el siguiente
// 1,2,3,4 : entro, veo 1 y lo sumo, actualizo 2,3,4