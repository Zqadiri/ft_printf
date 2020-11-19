/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 14:50:39 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 19:03:11 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int		ft_nbrlen(unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char					*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	i;

	if (n == 0)
		return (ft_strdup("0"));
	i = ft_nbrlen(n);
	if (!(str = (char *)malloc(i + 1)))
		return (NULL);
	str[i] = '\0';
	while (n != 0)
	{
		str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
