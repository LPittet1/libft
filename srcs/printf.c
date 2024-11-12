/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:02:29 by lpittet           #+#    #+#             */
/*   Updated: 2024/11/12 09:07:12 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	check_format(int c, va_list args)
{
	int		print_len;
	char	*base_p;

	base_p = "0123456789abcdef";
	print_len = 0;
	if (c == '%')
		print_len += ft_printchar(c);
	if (c == 'c')
		print_len += ft_printchar(va_arg(args, int));
	if (c == 's')
		print_len += ft_printstr(va_arg(args, char *));
	if (c == 'p')
		print_len += ft_putnbr_p(va_arg(args, unsigned long), base_p, 0);
	if (c == 'd')
		print_len += ft_putnbr(va_arg(args, int), "0123456789");
	if (c == 'i')
		print_len += ft_putnbr(va_arg(args, int), "0123456789");
	if (c == 'u')
		print_len += ft_putnbr_u(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		print_len += ft_putnbr_u(va_arg(args, int), "0123456789abcdef");
	if (c == 'X')
		print_len += ft_putnbr_u(va_arg(args, int), "0123456789ABCDEF");
	return (print_len);
}

static int	iter(const char *str, va_list args, int *i)
{
	int	stock;
	int	print_len;

	print_len = 0;
	if (str[*i] == '%')
	{
		*i += 1;
		stock = check_format(str[*i], args);
		if (stock == -1)
		{	
			va_end(args);
			return (-1);
		}
		print_len += stock;
	}
	else
	{
		if (ft_printchar(str[*i]) == -1)
			return (-1);
		print_len++;
	}
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_len;
	int		var;

	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		var = iter(str, args, &i);
		if (var == -1)
			return (-1);
		print_len += var;
		i++;
	}
	va_end(args);
	return (print_len);
}
