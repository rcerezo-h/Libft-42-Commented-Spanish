/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:26:46 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:37:51 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia los primeros n caracteres del objeto apuntado
 * por s2 al objeto apuntado por s1. Se asegura que no
 * esten superpuestos y copua los caracteres a un array
 * temporalmente. Se devuelve el valor de s1.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*castsrc;
	char	*castdst;

	castsrc = (char *)src;
	castdst = (char *)dst;
	if (castsrc < castdst)
	{
		while (len--)
			castdst[len] = castsrc[len];
	}
	else
		ft_memcpy(castdst, castsrc, len);
	return (dst);
}
