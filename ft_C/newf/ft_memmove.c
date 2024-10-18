/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:47:40 by alermi            #+#    #+#             */
/*   Updated: 2024/10/18 23:33:33 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memmove(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;
	
	if (!dest && !src)
	return (NULL);

	c_dest = (char *)dest;
	c_src = (char *)src;
	i = 0;
	if (c_dest > c_src)
	{
		while (n-- > 0)
			c_dest[n] = c_src[n];
	}
	else
	{
		while (i++ < n)
		c_dest[i] = c_src[i];
	}
}
