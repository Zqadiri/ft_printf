/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 14:35:25 by zqadiri           #+#    #+#             */
/*   Updated: 2019/12/30 19:05:27 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_flags
{
	int			width;
	char		flags;
	int			precision_len;
	int			point;
	char		specifier;
}				t_flags;

int				ft_printf(const char *format, ...);
int				countdigit(int n);
int				ft_atoi(const char *s);
char			*ft_utoa(unsigned int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
char			*ft_itoa(int n);
int				print_depspe(t_flags *f, va_list r);
int				parse_flags(char *str, t_flags *f, va_list p);
void			cas_flagm(t_flags *f);
void			set_flags(char *s, t_flags *f, int *i);
void			initialisation_flags(t_flags *f);
int				put_car(char s, t_flags *f);
int				print_car(t_flags *f, va_list p);
int				cas_minusint(char *str, t_flags *f);
int				put_int(int n, t_flags *f);
int				print_i_zero(int n, t_flags *f);
int				prec_zero(t_flags *f, char *str, int a);
int				print_int(t_flags *f, va_list p);
int				ft_i_p_q(char *str, t_flags *f);
int				ft_i_p_m(char *str, t_flags *f);
int				put_intp(char *str, t_flags *f);
int				print_percent(t_flags *f);
int				write_space(int n);
int				write_zero(int n);
char			*ft_strdup(const char *s);
int				ft_strlen(const char *s);
int				ft_max(int strlen, int prec_len);
int				print_string(t_flags *f, va_list p);
int				put_strp(char *str, t_flags *f);
int				put_str(char *str, t_flags *f);
int				ft_putnstr(char *s, int n);
int				print_unsint(t_flags *f, va_list p);
int				width_zero(t_flags *f, unsigned int a);
int				ft_unsi_p_q(char *str, t_flags *f);
int				print_unsi_zero(unsigned int n, t_flags *f);
int				put_unsintp(char *str, t_flags *f);
int				put_unsint(unsigned int n, t_flags *f);
int				ft_unsi_p_m(char *str, t_flags *f);
int				print_hex(t_flags *f, va_list p);
int				print_hex_zero(unsigned int n, t_flags *f);
int				put_hexp(unsigned int n, t_flags *f);
int				ft_hex_p_m(unsigned int n, t_flags *f);
int				ft_hex_p_q(unsigned int n, t_flags *f);
int				put_hex(unsigned int n, t_flags *f);
int				write_hex(unsigned int p, t_flags *f);
void			printnbrhexup(unsigned int n);
void			printnbrhex(unsigned int n);
int				print_pointer(t_flags *f, va_list p);
void			write_pointer(unsigned long int n);
int				len_hex(unsigned int p);
int				len_pointer(size_t p, t_flags *f);
int				ft_print_char(char c, t_flags *f);
int				print_p(size_t n, t_flags *f);
#endif
