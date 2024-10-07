/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:56:25 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/07 10:53:47 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countc(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	len = ft_countc(n);
	s = malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s[len] = '\0';
	while (n != 0)
	{
		len--;
		s[len] = (n % 10 + 48);
		n /= 10;
	}
	return (s);
}
/*
int main()
{
	int i = -1;
	printf("length : %lu\n", ft_countc(i));
	printf("input : %d, itoa : %s\n", i, ft_itoa(i));
}*/