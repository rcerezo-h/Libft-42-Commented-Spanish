/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:14:25 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:29:06 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia los primeros n caracteres del objeto
 * apuntado por s2 al objeto apuntado por s1.*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		*cdst = *csrc;
		cdst++;
		csrc++;
		n--;
	}
	return (dst);
}
