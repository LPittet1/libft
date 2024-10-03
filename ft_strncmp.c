/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:21:47 by lpittet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/03 09:25:54 by lpittet          ###   ########.fr       */
=======
/*   Updated: 2024/10/02 10:24:52 by lpittet          ###   ########.fr       */
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// to test at school

#include <string.h>
int main (int ac, char **av)
{
	if (ac == 4)
	{
		printf("my func : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("original : %d\n", strncmp(av[1], av[2], atoi(av[3])));
	}
}