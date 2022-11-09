/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:51:05 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:20:38 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva con malloc y devuelve una substring de la
 * string s. La substring empieza desde el indice start
 * y tiene una longitud máxima len.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *) ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) <= start + len)
		str = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start] && x < len)
		str[x++] = s[start++];
	str[x] = '\0';
	return (str);
}
