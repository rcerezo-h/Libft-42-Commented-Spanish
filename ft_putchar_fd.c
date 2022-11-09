/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:04:16 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:42:31 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Envia el caracter c al file descriptor especificado.*/

/* Nota: El file descriptor (fd), es un mumero provisto
 * por el kernel, usualmente no muy alto, que representa
 * algo a lo que se le puede mandar bytes, o desde donde 
 * pueden ser leidos. */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
