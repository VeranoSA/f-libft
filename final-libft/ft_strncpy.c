/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:06:28 by tseanego          #+#    #+#             */
/*   Updated: 2019/08/29 18:15:48 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies up to n characters from the string pointed to, by src to dst.
** In a case where the length of src is less than that of n,
** the remainder of dest will be padded with null bytes.
**
** If stpncpy() does not terminate dst with a NUL character,
** it instead returns a pointer to dst[n] (which does not necessarily refer to a
** valid memory location.)
** dst − This is the pointer to the destination array where the content
** is to be copied.
** src − This is the string to be copied.
** n − The number of characters to be copied from source.
** #include <stdio.h>
** #include <string.h>
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
/*
** int main ()
**{
** char src[40];
**   char dst[12];
**   memset(dst, '\0', sizeof(dst));
**   strcpy(src, "WeThinkCodeCapeTown");
**   ft_strncpy(dst, src, 10);
**   printf("Final copied string : %s\n", dst);
**   return(0);
**}
*/
