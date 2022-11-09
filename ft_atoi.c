/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:49:52 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 10:38:22 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Convierte una cadena (string) en su valor numérico (entero)*/

int	ft_atoi(const char *str)
{
	int	res; /*variable resultado*/
	int	sign; /*variable signo*/
	int	x; /*El contador que vamos a utilizar*/

	x = 0;
	res = 0;
	sign = 1; /*El signo es 1 para que sea un número positivo siempre*/
	/*Mientras sea un espacio en sus diferentes formas, que continue avanzando el contador*/
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'
		|| str[x] == '\v' || str[x] == '\r' || str[x] == '\f')
		x++;
	/*Si el número es negativo, pasa a positivo con el -1, y si es positivo sigue avanzando*/
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	/* Aqui convertimos la cadena de caracteres de char a int siempre que sean numeros.
	 * Si el caracter que encontramos es un numero, lo convertimos a su valor numérico
	 * en ascii. Comenzamos estableciento resultado a 0, y lo multiplicamos por 10
	 * para establecer su colocación. Luego se resta el valor numerico del caracter
	 * 0 en la tabla ascii para establecer el valor de este número en dicha tabla.
	 * El bucle continua hasta que llegue a un caracter que no sea un número*/
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	return ((int)(res * sign));
}
