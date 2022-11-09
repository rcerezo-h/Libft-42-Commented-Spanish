/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:49:08 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:27:19 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compara los primeros n caracteres de objeto
 * apuntado por s1, con los primeros n caracteres
 * del objetivo apuntado por s2. Esta función
 * devuelve un número entero mayor, igual o menor
 * que cero en base a si el objeto apuntado por s1
 * es mayor, igual o menor que el objeto apuntado por s2*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && *c1 == *c2)
	{
		c1++;
		c2++;
	}
	return ((int)(*c1 - *c2));
}
