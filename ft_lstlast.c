/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 07:36:00 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 07:41:39 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
// busco cual es el ultimo nodo de la lista
// hago mientras haya siguiente porque si no me quedaría con el último valor,
// no con el ultimo nodo
// while (lst) : lstfin,null
// while (lst -> next) : lstant,lstfin