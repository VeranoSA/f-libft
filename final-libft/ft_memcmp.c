/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:03:00 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:55:09 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp() function compares byte string s1 against byte string s2
** Both strings are assumed to be n bytes long
** The memcmp() function returns zero if the two strings are identical, oth-
** erwise returns the difference between the first two differing bytes
** (treated as unsigned char values,
** s1 − This is the pointer to a block of memory
** s2 − This is the pointer to a block of memory
** n − This is the number of bytes to be compared
** #include <string.h>
** #include <stdio.h>
** #include <unistd.h>
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *c1;
	const unsigned char *c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
/*
** int main () {
** char str1[15];
** char str2[15];
** int ret;
** memcpy(str1, "Abcdef", 6);
** memcpy(str2, "aBCDEF", 6);
** ret = memcmp(str1, str2, 5);
** if(ret > 0) {
** printf("str2 is less than str1");
** } else if(ret < 0) {
** printf("str1 is less than str2");
** } else {
** printf("str1 is equal to str2");
** }
** return(0);
**}
*/
