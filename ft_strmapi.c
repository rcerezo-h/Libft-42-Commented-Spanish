/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:50:18 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:12:13 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función aplica la función f dada a cada carácter 
 * de la cadena para crear una nueva cadena que es el 
 * resultado de tener la función f ejecutandose en la cadena s.
 * Devolverá una copia 'fresca' de la cadena modificada*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*str;

	/* Asignamos la memoria necesaria para hacer una copia de la cadena modificada a la
	 * cadena que queremos devolver. Usamos nuestra función ft_strlen en la cadena dada
	 * y nos aseguramos de añadirle 1 para compensar la terminación '\0'.
	 *  Si la asignación falla devolvemos NULL. De lo contrario, continuamos.*/

	x = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);

	/* Recorremos nuestra cadena s y aplicamos la función f a cada uno de sus
	 * caracteres. Ponemos el resultado de esto en la posición correspondiente en
	 * nuestra cadena vacía. Una vez que llegamos al final de nuestra cadena salimos
	 * del bucle y nos aseguramos de añadir una terminación '\0' al final de nuestra 
	 * cadena rellenada. Entonces devolvemos nuestra nueva cadena.*/

	while (s[x] != '\0')
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
