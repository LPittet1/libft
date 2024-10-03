/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:27:59 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 14:40:18 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
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

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**ret;
	int		i;
	int		start;
	int		ccount;

	i = 0;
	ccount = 0;
	printf("a\n");
	count = count_words(s, c);
	printf("a\n");
	ret = (char**)malloc(sizeof(char*) * (count + 1));
	if (ret == NULL)
		return(NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		printf("a\n");
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			ret[ccount] = ft_substr(s, start, i - start + 1);
			ccount++;
		}
	}
	ret[ccount] = 0;
	return (ret);
}

int main()
{
	int i = 0;
	
	char *str = "bachbjla ajl";
	
	char sep = 'a';
	
	printf("%d", count_words(str, sep));
	printf("a\n");
	char **tab;
	
	tab = ft_split(str, sep);
	
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}