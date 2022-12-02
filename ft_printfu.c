/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfU.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:24:27 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/24 22:48:29 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfu(unsigned int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (n >= 10)
	{
		len += ft_printfu(n / 10);
		len += ft_printfu(n % 10);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
