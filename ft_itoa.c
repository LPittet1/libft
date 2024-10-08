/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:56:25 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/08 13:08:30 by lpittet          ###   ########.fr       */
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

static char *itoa_min(void)
{
	char	*s;

	s = malloc(sizeof(char) * 12);
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

static char	*itoa_zero(void)
{
	char	*s;

	s = malloc(sizeof(char) * 2);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	if (n == -2147483648)
		return (itoa_min());
	if (n == 0)
		return (itoa_zero());
	len = ft_countc(n);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
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