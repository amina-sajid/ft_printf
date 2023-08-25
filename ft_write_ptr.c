/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:26:07 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:35:08 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	write_ptr(unsigned long n)
{
	int		len;
	char	*digit;

	len = 0;
	digit = "0123456789abcdef";
	if (n >= 16)
		len += write_ptr(n / 16);
	len += write(1, &digit[n % 16], 1);
	return (len);
}
/*
int main()
{
	long l = -9223372036854775808 ;
	long k = 9223372036854775807;
	void	*p ;
	void *o;
	p = &l;
	o = &k;

	printf("%p %p\n", LONG_MIN,LONG_MAX);
	write_ptr((unsigned long)p);
		write_ptr((unsigned long)o);
}
*/
/*
int main()
{
int len1 = 0;
	int len2 = 0;
long q= 9223372036854775807;
void * r = &q;
len1 = printf("%p\n", r);
len2 = write_ptr((unsigned long)r);
printf("\n");
	printf("%d\n %d",len1,len2);
}
*/
