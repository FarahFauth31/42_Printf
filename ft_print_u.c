/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:51:51 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/12 14:18:16 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	unsigned int	rest;
	int				len;

	len = 0;
	if (n > 9)
	{
		len = ft_print_u(n / 10);
	}
	rest = (n % 10) + 48;
	write(1, &rest, 1);
	return (len + 1);
}
