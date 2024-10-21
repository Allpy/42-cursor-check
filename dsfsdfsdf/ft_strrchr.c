/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:28:01 by alermi            #+#    #+#             */
/*   Updated: 2024/10/21 20:28:12 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	while (*s)
	{
		if((s == (char)c)
			p = s;
		s++;
	}
	if (*p)
		return (p);
	return (0);
}