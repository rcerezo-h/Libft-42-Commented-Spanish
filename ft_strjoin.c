/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:12:19 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 12:02:08 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta función reserva con malloc y devuelve una 
 * nuevastring, formada por la concatenación de s1 y s2.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	
	/* Empezamos declarando tres variables. Las dos primeras
	 * serán contadores que utilizaremos para movernos por
	 * nuestras cadenas. La tercera es la nueva cadena que
	 * que asignaremos a la memoria para devolver la concatenación.*/
	
	int		x;
	int		y;
	char	*str;

	/* Ponemos ambas variables del contador a 0 ya que querremos que ambos
	 * contadores comiencen al principio de sus respectivas cadenas. A continuación
	 * asignamos memoria usando la función malloc con una combinación de uso de
	 * nuestras funciones ft_strlen realizadas anteriormente. Usamos la función ft_strlen
	 * en ambas cadenas de parámetros para averiguar la longitud completa para una 
	 * concatenación y añadimos 1 a esta longitud añadida para asegurarnos de que podemos
	 * añadir una terminación '\0'. Si la asignación falla, devolveremos NULL.*/

	x = 0;
	y = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);

	/* Si la asignación funcionó comenzamos nuestra concatenación de nuestras cadenas dadas.
	 * Comenzamos con s1 con un bucle diciendo que mientras
	 * no hayamos llegado al final de la cadena, continuamos. Colocamos el índice
	 * de nuestra nueva cadena str y de nuestro parámetro s1 en x, que en este momento es 0. 
	 * Luego recorremos la longitud de s1 colocando cada carácter
	 * de s1 en str. Una vez que esto ha terminado continuamos con el siguiente bucle.*/
		
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	/* Este siguiente bucle es exactamente igual que el anterior, excepto que debes
	 * tomar nota de nuestro uso de la variable contador y. Y es igual a 
	 * 0 en este punto de nuestra función. Para nuestra nueva cadena str establecemos el índice
	 * igual al contador anterior x más nuestro nuevo contador y. Esto nos mantiene en
	 * la posición del índice en la que terminamos cuando nuestro bucle anterior terminó ya que
	 * será el valor que tenía x al final del bucle anterior más el valor actual de y
	 * valor de 0. Usamos y para establecer el índice de nuestra cadena s2 y dejamos que el bucle
	 * hasta que hayamos alcanzado el final de s2. Una vez que el final de s2 ha sido
	 * alcanzado añadimos una terminación '\0' al final de nuestra cadena y
	 * devolvemos la nueva cadena que es una concatenación de nuestros parámetros.*/
	
	while (s2[y] != '\0')
	{
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (str);
}
