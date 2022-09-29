/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:45:56 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/30 11:06:21 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	char	*tmp;

	if (s)
	{
		tmp = s;
		while (*tmp)
		{
			write(fd, tmp, 1);
			tmp++;
		}
	}
}
