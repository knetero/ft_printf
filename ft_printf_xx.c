/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:19:06 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/25 15:19:16 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xx(unsigned long n)
{
	char	*p;
	int		len;

	len = 0;
	p = "0123456789ABCDEF";
	if (n >= 0 && n <= 15)
	{
		n = p[n];
		len += write(1, &n, 1);
	}
	else
	{
		len += ft_printf_xx(n / 16);
		len += ft_printf_xx(n % 16);
	}
	return (len);
}
