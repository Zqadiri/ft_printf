/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 15:00:16 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 19:05:55 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
