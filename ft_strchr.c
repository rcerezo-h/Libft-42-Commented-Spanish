/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:40:20 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:47:09 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/* Busca la primera letra que se le da como parametro
 * y cuando la encuentra escribe lo que sigue despues
 * de dicha letra incluyendola.*/

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		x;

	x = 0;
	alts = (char *)s;
	altc = c;
	while (alts[x] != altc)
	{
		if (alts[x] == '\0')
			return (NULL);
		x++;
	}
	return ((char *)alts + x);
}
