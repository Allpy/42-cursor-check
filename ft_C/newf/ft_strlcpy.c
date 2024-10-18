/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:35:04 by alermi            #+#    #+#             */
/*   Updated: 2024/10/18 23:59:30 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


int strlen(void *s)
{
	unsigned int	i;
	char *c_src;

	c_src = (char *)s;
	i = 0;
	while (c_src[i] != '\0')
	i++;
	
	return (i);
}


size_t ft_strlcpy(char *dest, const char *src, size_t len)
{
	char *c_src;
	int srclen;
	size_t i;

	c_src = (char *)src;
	srclen = strlen(c_src);
	i = 0;

}
