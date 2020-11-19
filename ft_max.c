/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 15:02:20 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/27 14:45:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_max(int strlen, int prec_len)
{
	if (strlen > prec_len)
		return (strlen);
	if (prec_len > strlen)
		return (prec_len);
	return (strlen);
}
