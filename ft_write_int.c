/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:56:07 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:35:58 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	write_int(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len += write_char('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		len += write_int(nbr / 10);
	len += write_char(nbr % 10 + '0');
	return (len);
}
/*
int main()
{
	write_int(-2147483648);
}*/
