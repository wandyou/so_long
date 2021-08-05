/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:38:46 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 08:09:08 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_map(t_map *map)
{
	map->x = 0;
	map->y = 0;
	map->line = 0;
	map->wall.path = WALL_TEXTURE_PATH;
	map->floor.path = FLOOR_TEXTURE_PATH;
	map->wall.img = NULL;
	map->floor.img = NULL;
	map->map = NULL;
}
