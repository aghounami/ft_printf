/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:41:20 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/16 15:31:21 by aghounam         ###   ########.fr       */
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
		if (s[i] == '%' && s[i + 1])
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
// // 	char str[] = "world";
// // 	char *ch;
// // 	int re = ft_printf("\nhello %s %d %p %d %u %x %X %% ", str, 2, ch, 88, 9, 64, 64);
// // 	// printf("%ld\n", n);
// // 	int l =printf("\nhello %s% d %p %d %u %x %X %% ", str, 2, ch, 88, , 64, 64);
// // 	printf("\n%d %d", re, l);
// // 	// printf("%%%%%\n");
// // 	//ft_printf("%v");
// // 	// ft_printf("%%%%%\n");
// ft_printf("hello \n%u\n", 	65536);
// printf("hello \n%u\n", 	65536);
// }
