/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:12:35 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 13:13:43 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function iterates through a list and applies
** a function to each item in the list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
