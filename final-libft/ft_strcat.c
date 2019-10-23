/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:21:30 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 17:00:27 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcat appends the string pointed to by src to the end of the
** string pointed to by dest.
** dest − This is pointer to the destination array,
** which should contain a C string, and should be large enough
** to contain the concatenated resulting string.
** src − This is the string to be appended. This should not
** overlap the destination.
**
** This function returns a pointer to the resulting string dest.
** #include <stdio.h>
** #include <string.h>
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*
** int main ()
** {
** char src [50], dst[50];
** strcpy(src, "This is source");
** strcpy(dst, "This is destination");
** ft_strcat(dst, src);
** printf("Final destination string : |%s|, dst);
** return (0);
**}
*/
