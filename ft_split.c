/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:27:59 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/04 10:35:02 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			if (i == 0 || (i > 0 && s[i - 1] == c))
				count++;
			i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static	char	*ft_word(char const *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (end - start));
	if (str == NULL)
		return (NULL);
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		start;
	int		iword;

	i = 0;
	iword = 0;
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			tab[iword] = ft_word(s, start, i);
			iword++;
		}
	}
	tab[iword] = 0;
	return (tab);
}

int main()
{
	char *s =  ",,,,,un,petit,,,,test,pour,voir,si,ca,fonctionne,,,,,";
	char c =  ',';
	int i = 0;
	char **tab = ft_split(s, c);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}
