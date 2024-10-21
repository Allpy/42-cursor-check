/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:18:39 by alermi            #+#    #+#             */
/*   Updated: 2024/10/21 19:36:51 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = 0;
	while (src[i] && dst_size + i < size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst [dst_size + i] = '\0';
	return (src_size + size);
}
