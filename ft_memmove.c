/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:20:43 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/02 12:19:42 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*cdest;
	char	*csrc;
	int		i;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	while (i < n && csrc[i])
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cdest[i] = temp[i];
		i++;
	}
	return (dest);
}


// test at school also try invert dest and src
#include <string.h>
int main()
{
	char *dest = strdup("aaaaaaaa");
	char *src = strdup("test");
	memmove(dest,src,9);
	printf("%s\n", dest);
}