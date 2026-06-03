/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margalin <margalin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 06:52:41 by margalin          #+#    #+#             */
/*   Updated: 2026/06/02 07:11:36 by margalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}
// creo una variable que será mi nodo que quiero crear
// uso malloc que pueda contener el nuevo nodo
// asigno a la variable content declarada en la struct el valor content de 
// entrada y en este caso como solo quiero crear un nodo, next sera null
// devuelvo el nuevo nodo
