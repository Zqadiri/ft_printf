/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:49:30 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 18:49:47 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(size_t n, t_flags *f)
{
	int	cnt;

	cnt = 0;
	if (f->flags == 'q' && f->width > len_pointer(n, f))
		cnt += write_space(f->width - len_pointer(n, f));
	if (n == 0 && f->point && f->precision_len == 0)
		cnt += write(1, "0x", 2);
	else
	{
		write(1, "0x", 2);
		write_pointer(n);
		cnt += len_pointer(n, f);
	}
	if (f->flags == '-' && f->width > len_pointer(n, f))
		cnt += write_space(f->width - len_pointer(n, f));
	return (cnt);
}

int	print_pointer(t_flags *f, va_list p)
{
	int					cnt;
	size_t				a;

	cnt = 0;
	a = va_arg(p, size_t);
	if (f->point == 0)
		cnt += print_p(a, f);
	else
	{
		if (f->precision_len == 0)
			cnt += print_p(a, f);
	}
	return (cnt);
}
