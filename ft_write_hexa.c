/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:59:12 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:41:40 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	write_hexa(unsigned int n)
{
	char			*digit;
	int				len;

	digit = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
		len += write_hexa(n / 16);
	len += write(1, &digit[n % 16], 1);
	return (len);
}
/*
int main()
{
write_hex(255);
return(0);
}*/
