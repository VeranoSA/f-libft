/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:55:58 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 10:57:25 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function takes a pointer to a string
** as input, splits the string at a specified character
** and allocates a memory block with malloc
** and returns the new strings ending with a null byte.
** Logic:
** 1) we need to use two extra functions or we'll run out of
**    lines, but these functions need to be declared as
**    static so that the rest of the liubrary cannot see them
** 2) we have an error check so that if we are passed nothing
**    the function returns 0
** 3) we need to count the amount of words, so we pass the input
**    to one of our extra functions that increments in a loop
**    using the specified splitting character to count the words
**    and the result returned here will tell us how many
**    strings we need to split the input into and thus how much
**    memory we need to allocate with malloc
** 4) we allocate memory for the variable length + 1 for the null byte
** 5) we have a safeguard so if memory allocation fails
**    the function returns null
** 6) we create a loop to split the words, assign a null byte at the end
**    and repeat for words number of times, using our second function
**    length to find the length of each individual split and allocate
**    memory accordingly to that size plus one for the null byte
** 7) we reset our index so that we can return to the start of our string
*/

#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static int		ft_length(char const *str, char c)
{
	int n;

	n = 0;
	if (!str)
		return (0);
	while (str[n] != c && str[n])
		n++;
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**new;

	i = 0;
	if (!s || !c)
		return (0);
	words = ft_count(s, c);
	new = (char **)malloc(sizeof(char *) * (words + 1));
	if (new == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		new[i] = (char *)malloc(sizeof(char) * (ft_length(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			new[i][j++] = *s++;
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
