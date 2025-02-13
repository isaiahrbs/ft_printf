/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 02:44:51 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/22 12:39:35 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(null)";
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		return (i);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
