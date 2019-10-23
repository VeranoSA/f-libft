/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:16:30 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:23:18 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat() functions copy and concatenate strings respectively.
** strlcat() take the full size of the buffer (not just the length)
** and guarantee to NUL-terminate the result (as long as size is larger
** than 0 or, in the case of strlcat(), as long as there is at least
** one byte free in dst.
** Note that a byte for the NUL should be included in size.
** strlcat() both src and dst must be NUL-terminated.
** The strlcat() function appends the NUL-terminated string src
** to the end of dst.
** It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
**
** dst Is the null-terminated string to be modified or appended.
** src Is the null-terminated string to be copied.
** size Nothing will be written beyond dst+size-1.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
/*
**int		main(void)
**{
**	char		a[10] = "Hi";
**	const char	b[3] = "Hi";
**
**	printf("%zu\n", ft_strlcat(a, b, 1));
**	printf("%zu\n", ft_strlcat(a, b, 10));
**	return (0);
**}
*/
