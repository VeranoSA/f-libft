/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:10:51 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 13:11:38 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function deletes a list.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*i;

	if (*alst)
	{
		while ((*alst) && alst)
		{
			i = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = i;
		}
	}
	(*alst) = NULL;
}
