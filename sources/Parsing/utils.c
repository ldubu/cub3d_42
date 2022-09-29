/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <ldubuche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:07:03 by ldubuche          #+#    #+#             */
/*   Updated: 2022/09/28 15:14:52 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cub3D.h"

char	*next_line(int fd, char *line)
{
	free(line);
	line = NULL;
	line = get_next_line(fd);
	return (line);
}

int	strisint8(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	if (i > 3)
		return (1);
	return (0);
}

void	free_split(char **split_tab)
{
	int	i;

	if (split_tab)
	{
		i = 0;
		while (split_tab[i])
		{
			if (split_tab[i])
			{
				free(split_tab[i]);
				split_tab[i] = NULL;
			}
			i++;
		}
		free(split_tab);
		split_tab = NULL;
	}
}

void	free_map(t_map *map, int i)
{
	if (map)
	{
		if (map->map && i != -1)
		{
			while (i < map->height)
			{
				if (map->map[i])
				{
					free(map->map[i++]);
					map->map[i] = NULL;
				}
				i++;
			}
		}
		if (map->texture)
		{
			free(map->texture);
			map->texture = NULL;
		}
	}
}

int	compare(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
