/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:27:59 by lpittet           #+#    #+#             */
/*   Updated: 2024/11/20 16:45:58 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_free_tab(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static size_t	count_words(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static	char	**ft_split_words(char const *s, char c, char **tab)
{
	size_t	len;
	int		i;
	size_t	iword;

	i = 0;
	iword = 0;
	len = 0;
	while (iword < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		tab[iword] = ft_substr(s, i - len, len);
		if (tab == NULL)
			return (ft_free_tab(tab, iword));
		len = 0;
		iword++;
	}
	tab[iword] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_split_words(s, c, tab);
	return (tab);
}
