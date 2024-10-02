/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:46:11 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/02 14:00:47 by lpittet          ###   ########.fr       */
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
		dest[i] = 0;
	return (i);
}


// cannot test home do at school also make strlcat 
#include <string.h>

int main()
{
	char dest[100];
	char *src = "testing";
	printf("my func : %ld\n", ft_strlcpy(dest, src, 2));
	printf("original : %d\n", strlcpy(dest, src, 2));
}