/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:28:57 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/01 11:28:59 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (0 <= str[i] && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
