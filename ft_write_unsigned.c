/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:57:09 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:32:30 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	write_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += write_unsigned(n / 10);
	len += write_char(n % 10 + '0');
	return (len);
}
