/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaiah <isaiah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:38:48 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/08 17:01:07 by isaiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end -1]))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

/*int main()
{
	char *s1 = "Hello, World!";
	char *set = "o";
	char *result = ft_strtrim(s1, set);
	printf("Result: %s\n", result);
	return 0;
}*/
