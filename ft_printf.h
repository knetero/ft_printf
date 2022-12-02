/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:59:24 by abazerou          #+#    #+#             */
/*   Updated: 2022/11/25 16:14:39 by abazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_printfu(unsigned int n);
int	ft_printfx(unsigned long n);
int	ft_printf_xx(unsigned long n);
int	ft_printf_p(void *s);

#endif