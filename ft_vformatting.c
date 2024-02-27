/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vformatting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:22:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/13 11:39:56 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vformatting(va_list printables, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_c(va_arg(printables, int));
	if (c == 's')
		len += ft_print_s(va_arg(printables, char *));
	if (c == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_print_p((uintptr_t)va_arg(printables, void *));
	}
	if (c == 'd' || c == 'i')
		len += ft_print_di(va_arg(printables, int));
	if (c == 'u')
		len += ft_print_u(va_arg(printables, unsigned int));
	if (c == 'x' || c == 'X')
		len += ft_print_xx(va_arg(printables, unsigned int), c);
	if (c == '%')
		len += ft_print_c('%');
	return (len);
}
