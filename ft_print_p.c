/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:23:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/13 11:39:40 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_rec(uintptr_t nb, uintptr_t len, char *base)
{
	int	rest;
	int	num_base;
	int	i;

	i = 0;
	if (nb > (len - 1))
	{
		i = ft_rec(nb / len, len, base);
	}
	rest = (nb % len);
	num_base = base[rest];
	write(1, &num_base, 1);
	return (i + 1);
}

int	ft_print_p(uintptr_t nb)
{
	int	len;

	len = 0;
	len += ft_rec(nb, 16, "0123456789abcdef");
	return (len);
}
