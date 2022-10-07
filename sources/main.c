/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <ldubuche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:45:47 by lfrederi          #+#    #+#             */
/*   Updated: 2022/09/28 11:51:08 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cub3D.h"

int	main(int argc, char **argv, char **envp)
{
	t_map	*map;
	int		y;
	int		x;

	map = parsing(argc, argv, envp);
	if (map)
	{
		printf("direction = %d, width = %d, height = %d\n", \
		map->direction, map->width, map->height);
		printf("textures :\n floor = %d, ceiling = %d\n", \
		map->texture->floor_rgb, map->texture->ceiling_rgb);
		printf("SO = %s, NO = %s, WE = %s, EA = %s\n", map->texture->so_texture, \
		map->texture->no_texture, map->texture->we_texture, \
		map->texture->ea_texture);
		if (map->map)
		{
			y = 0;
			while (y < map->height)
			{
				x = 0;
				while (x < map->width)
					printf("%d", map->map[y][x++]);
				printf("\n");
				y++;
			}
		}
	}
	free_map(map, 0);
	return (0);
}
