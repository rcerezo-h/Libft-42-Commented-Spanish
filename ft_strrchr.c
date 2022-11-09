/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:10:54 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:47:53 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/* Igual que strchr, pero en su lugar busca la ultima
 * letra y escribe el resto incluyendola.*/

char	*ft_strrchr(const char *s, int c)
{
	size_t		x;
	char		*alts;

	alts = (char *)s;
	x = ft_strlen(s);
	if (c == '\0')
		return (alts + x);
	while (x != 0)
	{
		if (alts[x] == (char)c)
			return (alts + x);
		x--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (NULL);
}
