/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:37:44 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/11 17:11:07 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_rec(int n)
{
	int	rest;
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_rec(n / 10);
	}
	rest = (n % 10) + 48;
	write(1, &rest, 1);
	return (i + 1);
}

int	ft_print_di(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len++;
	}
	len += ft_rec(n);
	return (len);
}
