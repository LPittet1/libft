/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:01:27 by lpittet           #+#    #+#             */
/*   Updated: 2024/10/03 13:58:37 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char * src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//to remove before submit for test
#include <stdio.h>
#include <string.h>
#endif