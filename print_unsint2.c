/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsint2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 14:38:37 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/27 14:38:45 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsi_p_q(char *str, t_flags *f)
{
	int	x;

	x = 0;
	x += write_space(f->width - ft_max(ft_strlen(str), f->precision_len));
	x += write_zero(f->precision_len - ft_strlen(str));
	x += write(1, str, ft_strlen(str));
	return (x);
}

int	ft_unsi_p_m(char *str, t_flags *f)
{
	int	x;

	x = 0;
	x += write_zero(f->precision_len - ft_strlen(str));
	x += write(1, str, ft_strlen(str));
	x += write_space(f->width - ft_max(ft_strlen(str), f->precision_len));
	return (x);
}
