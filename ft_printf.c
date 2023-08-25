/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:57:50 by asajid            #+#    #+#             */
/*   Updated: 2023/02/02 15:42:23 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_specifier(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += write_char(va_arg(args, int));
	else if (format == 's')
		len += write_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += write_int(va_arg(args, int));
	else if (format == 'u')
		len += write_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		len += write_hex(va_arg(args, unsigned int));
	else if (format == 'X')
		len += write_hexa(va_arg(args, unsigned int ));
	else if (format == 'p' )
	{
		len += write_str("0x");
		len += write_ptr(va_arg(args, unsigned long ));
	}
	return (len);
}

int	ft_printf(const char	*format, ...)
{
	int		len;
	va_list	args;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += write(1, "%", 1);
			else
				len += ft_specifier(args, *format);
		}
		else
			len += write_char(*format);
		format++;
	}
	va_end(args);
	return (len);
}
/*
int main()
{
	int len = 0;
	int len2 = 0;
	long l = 9223372036854775807;
	void	*r ;
	r = &l;

	len = ft_printf("output %d %c NULL %s NULL %u %x %X
	%p %%\n", 10, 'a',NULL, 4512, 255,255,l);
	len2 =   printf("output %d %c NULL %s NULL %u %x %X
	%p %%\n", 10, 'a',NULL, 4512, 255,255,l);

	printf("len: %d\n ,len2 = %d\n",len,len2);

	ft_printf("This %p is even stranger\n", (void *)-1);
	printf("This %p is even stranger\n", (void *)-1);


	ft_printf("%p\n", (void *)-1);
	printf("%p\n", (void *)-1);



}*/
