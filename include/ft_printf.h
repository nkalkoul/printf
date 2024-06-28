/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:32:32 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/06/29 01:17:22 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_putintd(va_list carg);
int	ft_putc(va_list carg);
int	ft_puts(char *str);
int	ft_putu(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_putnbrbase(unsigned long nb, char *base);
int	ft_putptr(void *ptr);
int	ft_putnbrbase(unsigned long nb, char *base);

#endif
