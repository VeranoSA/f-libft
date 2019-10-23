/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:20:39 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:09:44 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcpy() function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
** copies n characters from memory area src to memory area dst.
** dst − This is pointer to the destination array where the content is to be
** copied, type-casted to a pointer of type void*.
** src − This is pointer to the source of data to be copied,
** type-casted to a pointer of type void*.
** n − This is the number of bytes to be copied.
** The memcpy() function returns the original value of dst.
**#include <stdio.h>
**#include <string.h>
**#include <unistd.h>
*/

#include "libft.h"

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0 || dst == src)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}
/*
** int main()
** {
**	char str[] = "WeThink";
**	char str[] = "Code";
**
**	puts("str1 before memcpy");
**	puts(str1);
**
**	// Copies contents of str2 to sr1
**	memcpy (str1, str2, sizeof(str2));
** puts("\nstr1 after memcpy");
** puts(str2);
**
**
**
** return 0;
** }
*/
