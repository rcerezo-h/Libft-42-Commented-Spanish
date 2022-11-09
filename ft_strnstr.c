/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:19:06 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:16:37 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Busca una subcadena dentro de la cadena. Si por ejemplo
 * nuestra frase es hola buenas tardes a todos y queremos buscar
 * la a devuelve la letra y su posición*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack [i] == needle[0])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j]
				&& i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
