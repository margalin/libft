/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 07:12:08 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 07:28:02 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
//añado el nuevo nodo new al principio de la lista lst, necesito dos punteros
//para poder cambiar el primer nodo al que apunta, con 1 me quedaría con la list
//como la tengo, con 2 apunto a la dirección del principio *(*lst)
// como no quiero cambiar el contenido solo moverlo, no necesito asignar content
// tengo lst,algo(me da igual lo que sea)
// asigno como siguiente el actual next = *lst y luego actualizo el puntero a 
//este nuevo, haciendolo que ahora la lista sea new,ant