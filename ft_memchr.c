/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:08:12 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:21:24 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función busca la primera aparición del
 * caracter c en los primeros n bytes de la cadena
 * apuntada por el argumento str*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	
	/* En este bucle, se avanza mientras i sea menor 
	 * que el tamaño, y devuelve la primera aparición
	 * del caracter que se desea encontrar. Si no se 
	 * encuentra devuelve NULL*/
	
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
