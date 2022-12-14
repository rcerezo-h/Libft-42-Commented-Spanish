/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:07:02 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:44:47 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Envia la string s al file descriptor especificado*/

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}
