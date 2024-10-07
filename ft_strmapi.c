/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:25:05 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/07 11:20:30 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long	i;
	char			*res;
	size_t			len;

	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i] && i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char f_test(unsigned int i, char c)
{
	return (c = c + i);
}

int main()
{
	printf("%s\n", ft_strmapi("aaaaaa", &f_test));
}*/