/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 03:51:10 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 03:46:34 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_map(t_solong *solong)
{
	int	x;
	int	y;

	x = solong->frame.cur_x;
	y = solong->frame.cur_y;
	if (ft_is_wall(solong->map.map[y][x]))
		mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
			solong->map.wall.img,
			TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
	else if (ft_is_floor(solong->map.map[y][x]))
		mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
			solong->map.floor.img,
			TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}
