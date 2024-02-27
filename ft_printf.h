/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:36:23 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/13 11:47:17 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_print_c(char c);
int		ft_isformat(unsigned char c);
int		ft_vformatting(va_list printables, char c);
int		ft_print_s(char *s);
int		ft_print_xx(unsigned int nb, char c);
int		ft_print_di(int n);
int		ft_print_u(unsigned int n);
int		ft_print_p(uintptr_t nb);

#endif