/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:42:19 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/28 19:17:39 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_format(char spec, va_list arg, int *l);
void	ft_putstr(char *st, int *l);
void	ft_putchar(char c, int *l);
int		ft_printf(const char *str, const char *s, ...);
void	ft_hexa_adress(unsigned long src, int *l);
void	ft_putnbr(int n, int *l);
void	ft_putpositive(unsigned int nb, int *l);
void	ft_hexa_lower(unsigned int src, int *l);
void	ft_hexa_upper(unsigned int src, int *l);
#endif
