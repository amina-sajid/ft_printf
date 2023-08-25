/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:58:47 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:36:10 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	write_hex(unsigned int n)
{
	char			*digit;
	int				len;

	digit = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += write_hex(n / 16);
	len += write(1, &digit[n % 16], 1);
	return (len);
}
/*
int main()
{
	int p = 255;
write_hex(p);
}*/
/*
int main()
{
int len1 = 0;
	int len2 = 0;
long q= 9223372036854775807;
// void * r = &q;
len1 = printf("%x\n",  q);
len2 = write_hex((unsigned long)q);
printf("\n");
	printf("%d\n %d",len1,len2);
}*/
