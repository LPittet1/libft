/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:51:04 by lpittet           #+#    #+#             */
/*   Updated: 2024/11/12 09:07:30 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_printchar(int c)
{
	return ((int)write(1, &c, 1));
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		if (ft_printstr("(null)") == -1)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		if (ft_printchar(str[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
