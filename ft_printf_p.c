/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:28:19 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/25 15:35:37 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *s)
{
	unsigned long	i;
	int				len;

	i = (unsigned long)s;
	len = 0;
	if (!s)
	{
		len += ft_putstr("0x0");
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_printfx(i);
	}
	return (len);
}
