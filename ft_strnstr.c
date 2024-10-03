/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:34:25 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 10:54:31 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (j == ft_strlen(needle) - 1)
				return ((char *)haystack + i - j);
		}
		i ++;
	}
	return (0);
}

#include <string.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("my func : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
		printf("original : %s\n", strnstr(av[1], av[2], atoi(av[3])));
	}
}