/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:56:25 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 15:14:08 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	char	*s;
	int		len;
	int		temp;

	temp = i;
	len = 0;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if (i < 0)
	{
		i *= -1;
		s[0] = '-';
	}
	while (i != 0)
	{
		ft_itoa(i / 10);
		s[len] = (i % 10 + 48);
		len--;
	}
	return (s);
}

int main()
{
	int i = 123;
	printf("input : %d, itoa : %s\n", i, ft_itoa(i));
}