/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:41:20 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/10 15:50:16 by aghounam         ###   ########.fr       */
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
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
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
// 	int re = ft_printf("hello %s%d%p%d%u%x%X%%\n", str, 2, ch, 88, 9, 64, 64);
// 	// printf("%ld\n", n);
// 	int l =printf("hello %s%d%p%d%u%x%X%%\n", str, 2, ch, 88, 9, 64, 64);
// 	printf("%d %d\n", re, l);
// }
