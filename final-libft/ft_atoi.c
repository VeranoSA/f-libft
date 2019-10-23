/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:45:45 by tseanego          #+#    #+#             */
/*   Updated: 2019/09/16 15:47:03 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string pointed to
** by str to int representation
** This function returns the converted integral number as an int value
** If no valid conversion could be performed it returns zero
*/

#include "libft.h"

static int	overflow(unsigned long long overflow, int sign, const char *p)
{
	int	i;

	i = 0;
	while (*p <= '1' || *p >= '9')
		p++;
	while (ft_isdigit(*(p + i)))
		i++;
	if (i >= 19)
		return (sign == -1 ? 0 : -1);
	if (overflow > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	else
		return (overflow * sign);
}

int			ft_atoi(const char *str)
{
	unsigned long long	ret;
	int					len;
	int					i;
	int					sign;

	sign = 1;
	i = -1;
	len = 0;
	ret = 0;
	while (ft_iswhitespace(*str))
		str++;
	while (str[len])
		len++;
	while (++i <= len)
	{
		if (ft_isdigit(str[i]))
			ret = (ret * 10) + (str[i] - '0');
		else if (i == 0 && (str[i] == '-' || str[i] == '+'))
			sign = str[i] == '-' ? -1 : 1;
		else
			return (overflow(ret, sign, str));
	}
	return (overflow(ret, sign, str));
}
