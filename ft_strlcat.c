/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:33:57 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 11:50:42 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char * src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dst[i] && i < n)
		i++;
	while (src[j] && i < n - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (n != 0)
		dst[i] = '\0';
	while (src[j])
	{
		j++;
		i++;
	}
	return (i);
}
/*
// cannot test home do at school also make strlcat and strnstr
#include <string.h>

int main()
{
	char dest[50] = "hello ";
	char *src = "world";
	printf("my func : %lu\n", ft_strlcat(dest, src, 0));
	//printf("original : %lu\n", strlcat(dest, src, 0));
	printf("created string : %s", dest);
}
*/