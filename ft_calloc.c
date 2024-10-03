/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:46:30 by lpittet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/03 09:51:18 by lpittet          ###   ########.fr       */
=======
/*   Updated: 2024/10/02 14:57:22 by lpittet          ###   ########.fr       */
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_calloc(size_t nmemb, size_t size)
=======
void	*calloc(size_t nmemb, size_t size)
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
{
	void	*array;

	if(nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb);
	return (array);
}