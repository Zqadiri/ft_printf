/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 12:06:47 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 18:48:10 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printnbrhex(unsigned int n)
{
	if (n >= 16)
		printnbrhex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

void	printnbrhexup(unsigned int n)
{
	if (n >= 16)
		printnbrhexup(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'A' - 10;
	write(1, &n, 1);
}

int		write_hex(unsigned int p, t_flags *f)
{
	if (f->specifier == 'x')
		printnbrhex(p);
	else if (f->specifier == 'X')
		printnbrhexup(p);
	return (0);
}
