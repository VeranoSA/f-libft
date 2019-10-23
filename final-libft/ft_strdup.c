/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:15:26 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 08:03:01 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the  copy, and returns a pointer to it.  The pointer may
** subsequently be used as an argument to the function free(3).
** This function returns a pointer to a null-terminated byte string,
** which is a duplicate of the string pointed to by s.
** The memory obtained is done dynamically using malloc and hence it can be
** freed using free().It returns a pointer to the duplicated string s.
**  If insufficient memory is available, NULL is returned.
** Null
** #include <stdio.h>
** #include <string.h>
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
