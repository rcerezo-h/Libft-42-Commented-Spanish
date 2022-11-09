/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:21:51 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:19:26 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Elimina todos los caracteres de la string set desde el
 * pricnipio y desde el final de s1, hasta encontrar un
 * caracter no pertenenciente a set. La string resultante
 * se devuelve con una reserva de malloc*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*x;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
	{
		s1++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	x = ft_substr(s1, 0, len + 1);
	return (x);
}
