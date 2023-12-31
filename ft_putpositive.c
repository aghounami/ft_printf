/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpositive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:54:52 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/16 15:28:26 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpositive(unsigned int nb, int *l)
{
	if (nb >= 10)
	{
		ft_putpositive(nb / 10, l);
		ft_putpositive(nb % 10, l);
	}
	else
		ft_putchar(nb + '0', l);
}
