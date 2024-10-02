/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:21:47 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/02 10:24:52 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
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