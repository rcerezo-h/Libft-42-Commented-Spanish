/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:38:16 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:14:55 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compara dos strings hasta que sean diferentes
 * y devuelve un entero mayor, igual o menor que
 * 0 dependiendo si la cadena s1 es mayor, igual o menor
 * que la cadena s2.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[x] != '\0' && s1[x] == s2 [x] && x < n - 1)
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
