/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:09:31 by tseanego          #+#    #+#             */
/*   Updated: 2019/08/30 10:12:53 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strnstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len char-
** acters are searched.  Characters that appear after a `\0' character are
** not searched.  Since the strnstr() function is a FreeBSD specific API, it
** should only be used when portability is not a concern.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] == needle[j] &&
					(size_t)(i + j) < len)
				++j;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		++i;
	}
	return (0);
}
