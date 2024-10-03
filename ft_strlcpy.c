/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:46:11 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 11:40:16 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
		i++;
	while (src[i])
		i++;
	return (i);
}

/*
// cannot test home do at school also make strlcat and strnstr
#include <string.h>

int main()
{
	char dest[100];
	char *src = "testing";
	printf("my func : %lu\n", ft_strlcpy(dest, src, 1000));
	printf("original : %lu\n", strlcpy(dest, src, 1000));
	//printf("created string : %s", dest);
}
*/