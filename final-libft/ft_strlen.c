/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:00:32 by tseanego          #+#    #+#             */
/*   Updated: 2019/08/29 18:10:00 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlen() function computes the length of the string str.  The strnlen()
** function attempts to compute the length of str, but never scans beyond the
** first maxlen bytes of str.
** str − This is the string whose length is to be found.
** This function returns the length of string.
** #include <string.h>
** #include <stdio.h>
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
/*
**int main ()
**{
**char	str[] = "hello world";
**printf("%zu", ft_strlen(str));
**}
*/
