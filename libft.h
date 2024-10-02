/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:01:27 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/02 15:00:53 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);

//to remove before submit for test
#include <stdio.h>
#endif