/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:01:25 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:03:27 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Concatena strings, tomando el tamaño completo del buffer*/

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	if (dstsize <= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	x = ft_strlen(dest);
	y = 0;
	while (src[y] != '\0' && x + 1 < dstsize)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[y]));
}
