/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:26:20 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/25 15:56:06 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_next_args(int i, const char *str, va_list ap)
{
	int	len;

	len = 0;
	if (str[i] == 'c')
		len += ft_putchar(va_arg(ap, int));
	if (str[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (str[i] == 'd')
		len += ft_putnbr(va_arg(ap, int));
	if (str[i] == 'i')
		len += ft_putnbr(va_arg(ap, int));
	if (str[i] == 'u')
		len += ft_printfu(va_arg(ap, unsigned int));
	if (str[i] == 'x')
		len += ft_printfx(va_arg(ap, unsigned int));
	if (str[i] == 'X')
		len += ft_printf_xx(va_arg(ap, unsigned int));
	if (str[i] == 'p')
		len += ft_printf_p(va_arg(ap, void *));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				len += ft_putchar('%');
			len += check_next_args(i + 1, str, ap);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
