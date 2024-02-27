/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:42:30 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/12 14:38:08 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	printables;
	int		pos;
	int		len;

	if (!str)
		return (-1);
	va_start(printables, str);
	pos = 0;
	len = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%')
		{
			pos++;
			if (ft_isformat(str[pos]) == 1)
				len += ft_vformatting(printables, str[pos]);
			else
				len += ft_print_c(str[pos]);
		}
		else
			len += ft_print_c(str[pos]);
		pos++;
	}
	va_end(printables);
	return (len);
}

/* int	main(void)
{
	int	i;
	void	*p;

	p = &i;
	i = printf("<<%h>>");
	printf(" %d\n", i);
	i = ft_printf("<<%h>>");
	printf(" %d\n", i);
} */
