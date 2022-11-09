/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:49:28 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:48:46 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Devuelve un puntero a una nueva cadena de caracteres
 * que es un duplicado de la cadena apuntada por s. La 
 * memoria se obtiene a traves de Malloc.*/

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}
