/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:23:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/12 14:35:06 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_rec(unsigned int nb, unsigned int len, char *base)
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

int	ft_print_xx(unsigned int nb, char c)
{
	int	len;

	len = 0;
	if (c == 'x')
		len += ft_rec(nb, 16, "0123456789abcdef");
	if (c == 'X')
		len += ft_rec(nb, 16, "0123456789ABCDEF");
	return (len);
}
