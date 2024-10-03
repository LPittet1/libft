/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:46:11 by lpittet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/03 11:40:16 by lpittet          ###   ########.fr       */
=======
/*   Updated: 2024/10/02 14:45:24 by lpittet          ###   ########.fr       */
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
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
<<<<<<< HEAD
		dest[i] = '\0';
		i++;
	while (src[i])
		i++;
	return (i);
}

/*
=======
		dest[i] = 0;
	return (i);
}


>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
// cannot test home do at school also make strlcat and strnstr
#include <string.h>

int main()
{
	char dest[100];
	char *src = "testing";
<<<<<<< HEAD
	printf("my func : %lu\n", ft_strlcpy(dest, src, 1000));
	printf("original : %lu\n", strlcpy(dest, src, 1000));
	//printf("created string : %s", dest);
}
*/
=======
	printf("my func : %ld\n", ft_strlcpy(dest, src, 2));
	printf("original : %d\n", strlcpy(dest, src, 2));
}
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
