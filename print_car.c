/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_car.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 14:35:49 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 18:58:17 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_char(char c, t_flags *f)
{
	int		count;

	count = 0;
	if (f->flags == 'q' && f->flags != '-')
		count += write_space(f->width - 1);
	if (f->flags == '0')
		count += write_zero(f->width - 1);
	count += write(1, &c, 1);
	if (f->flags == '-')
		count += write_space(f->width - 1);
	return (count);
}

int		print_car(t_flags *f, va_list p)
{
	int		cnt;
	char	c;

	cnt = 0;
	if (f->specifier == 'c')
		c = (char)va_arg(p, int);
	else
		c = '%';
	cnt += ft_print_char(c, f);
	return (cnt);
}
