/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:58:21 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 16:59:34 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset() is used to fill a block of memory with a particular value
** function writes n bytes of value c (converted to an
** unsigned char) to the string str.
** copies the character c (an unsigned char) to the first n characters
** of the string pointed to, by the argument str.
** str − This is a pointer to the block of memory to fill.
**
** c − This is the value to be set. The value is passed as an int,
** but the function fills the block of memory using the unsigned char
** conversion of this value.
**
** n − This is the number of bytes to be set to the value.
** returns its first argument
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char*)b;
	i = 0;
	while (len > 0)
	{
		str[i] = c;
		len--;
		i++;
	}
	return (b);
}
/*
** int main ()
** {
** char str[50];
** strcpy(str,"This is WeThinkCode");
** puts(str);
** ft_memset(str,'$',7);
** puts(str);
** return(0);
** }
*/
