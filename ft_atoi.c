/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:16:23 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/01 14:28:16 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res += (str[i] - 48);
		res *= 10;
		i++;
	}
	if (str[0] == '-')
		res *= -1;
	return (res / 10);
}
