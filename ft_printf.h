/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaiah <isaiah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 04:56:55 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/19 10:16:03 by isaiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int			ft_printf(const char *str, ...);
ssize_t		ft_putchar(char c);
ssize_t		ft_putstr(char *str);
ssize_t		ft_putnbr(int n);
ssize_t		ft_putunbr(unsigned int n);
ssize_t		ft_putnbrbasehex(unsigned int n, int index);
ssize_t		ft_putptr(void *ptr);

#endif
