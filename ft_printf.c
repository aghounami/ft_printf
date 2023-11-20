/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:41:20 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/20 11:23:46 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		l;
	int		i;

	va_start(arg, s);
	l = 0;
	i = 0;
	if (write (1, "", 0) == -1)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if(s[i] == '\0')
				break ;
			ft_format(s[i], arg, &l);
		}
		else
			ft_putchar(s[i], &l);
		i++;
	}
	va_end(arg);
	return (l);
}
// int main()
// {
// 	char str[] = "world";
// 	char *ch;
// 	// int re = ft_printf("\nhello %s %d %p %d %u %x %X %% ", str, 2, ch, 88, 9, 64, 64);
// 	// // printf("%ld\n", n);
// 	// int l =printf("\nhello %s% d %p %d %u %x %X %% ", str, 2, ch, 88, , 64, 64);
// 	// printf("\n%d %d", re, l);                      
// 	int re = ft_printf("%%m%a");
// 	// ft_printf("%d", re);      
// }
