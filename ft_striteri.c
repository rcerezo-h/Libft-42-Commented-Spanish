/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:56:50 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:54:30 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función está hecha para aplicar la función
 * parámetro f a cada caracter en una cadena pasada
 * como parametro s. Cada caracter se pasa por la
 * direccion a la función f para que pueda ser modificada
 * si es necesario.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

/* Empezamos creando nuestra variable contador x y haciéndola un unsigned
 * int en caso de que tengamos una cadena muy grande. Luego ejecutamos un bucle que
 * continúa hasta que lleguemos al final de la cadena. Ejecutamos la función
 * f en cada carácter de la cadena. Utilizamos la cadena s + la variable x
 * porque es una forma más fácil de enviar una dirección de una posición de la cadena.
 * Una vez alcanzado el final de nuestra cadena la función ha terminado.*/

	x = 0;
	while (s[x] != '\0')
	{
		f(x, s + x);
		x++;
	}
}
