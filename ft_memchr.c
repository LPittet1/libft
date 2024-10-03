/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:05:32 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/02 14:24:33 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	while (cs[i] && i < n)
	{
		if (cs[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
