/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:00:49 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/10 16:20:15 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	un;
	size_t			len;

	len = n_len(n);
	if (n < 0)
		un = (unsigned int)(n * -1);
	else
		un = (unsigned int)n;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a != NULL)
	{
		a[len--] = '\0';
		if (n < 0)
			a[0] = '-';
		else if (n == 0)
			a[0] = '0';
		while (un > 0)
		{
			a[len--] = (char)(un % 10 + '0');
			un /= 10;
		}
	}
	return (a);
}

/*int main()
{
	int n = 123;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
