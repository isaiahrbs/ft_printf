/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbasehex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaiah <isaiah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 04:22:26 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/19 10:33:04 by isaiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbrbasehex(unsigned int n, int index)
{
	ssize_t	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_putnbrbasehex(n / 16, index);
		count += ft_putnbrbasehex(n % 16, index);
	}
	else
	{
		if (index == 0)
			count += ft_putchar("0123456789abcdef"[n % 16]);
		else
			count += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (count);
}
