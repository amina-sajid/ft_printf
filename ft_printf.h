/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:33:22 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:36:38 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	write_char(char c);
int	write_str(const char	*str);
int	write_int(int n);
int	write_hex(unsigned int n);
int	write_hexa(unsigned int n);
int	write_ptr(unsigned long n);
int	ft_printf(const char	*format, ...);
int	write_unsigned(unsigned int n);

#endif
