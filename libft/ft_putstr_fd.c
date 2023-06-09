/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:12:34 by atucci            #+#    #+#             */
/*   Updated: 2023/01/26 14:11:51 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	size_t	count;

	count = 0;
	if (c != 0)
	{
		while (c[count])
		{
			ft_putchar_fd(c[count], fd);
			count++;
		}
	}
}
