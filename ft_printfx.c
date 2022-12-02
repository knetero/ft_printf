/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:07:53 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/25 15:19:07 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfx(unsigned long n)
{
	char	*p;
	int		len;

	len = 0;
	p = "0123456789abcdef";
	if (n >= 0 && n <= 15)
	{
		n = p[n];
		len += write(1, &n, 1);
	}
	else
	{
		len += ft_printfx(n / 16);
		len += ft_printfx(n % 16);
	}
	return (len);
}
