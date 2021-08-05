/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 03:51:10 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 04:09:18 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_map(t_solong *solong)
{
	if (ft_is_wall(solong->map.map[solong->frame.cur_y][solong->frame.cur_x]))
		mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
			solong->map.wall.img, TEXTURE_SIZE * solong->frame.x,
			TEXTURE_SIZE * solong->frame.y);
	else if (ft_is_floor(solong->map.map[solong->frame.cur_y]
			[solong->frame.cur_x]))
		mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
			solong->map.floor.img, TEXTURE_SIZE * solong->frame.x,
			TEXTURE_SIZE * solong->frame.y);
}
