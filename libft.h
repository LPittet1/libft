/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:01:27 by lpittet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/03 13:58:37 by lpittet          ###   ########.fr       */
=======
/*   Updated: 2024/10/02 15:00:53 by lpittet          ###   ########.fr       */
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
<<<<<<< HEAD
size_t	ft_strlcat(char *dst, const char * src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//to remove before submit for test
#include <stdio.h>
#include <string.h>
=======

//to remove before submit for test
#include <stdio.h>
>>>>>>> 9192c60cbb66f3fb404272836b2650ff2051cb8f
#endif