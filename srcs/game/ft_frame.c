/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:56:12 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 03:41:55 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_out_of_boundaries(t_solong *solong)
{
	if (solong->frame.cur_x < 0 || solong->frame.cur_x > (int)solong->map.x - 1
		|| solong->frame.cur_y < 0
		|| solong->frame.cur_y > (int)solong->map.y - 1)
		return (1);
	else
		return (0);
}

void	ft_print_tile(t_solong *solong)
{
	char	tile;
	size_t	x;
	size_t	y;

	x = solong->frame.cur_x;
	y = solong->frame.cur_y;
	tile = solong->map.map[y][x];
	if (ft_is_map(tile))
		ft_print_map(solong);
	else if (ft_is_player(tile))
		ft_print_player(solong);
	else if (ft_is_collectible(tile))
		ft_print_collectible(solong);
	else if (ft_is_exit(tile))
		ft_print_exit(solong);
	else
		ft_print_exit(solong);
}

int	ft_frame(t_solong *solong)
{
	solong->frame.y = 0;
	while (solong->frame.y < 15)
	{
		solong->frame.x = 0;
		while (solong->frame.x < 15)
		{
			solong->frame.cur_x = solong->player.x
				- TILE_NB_DIVIDED + solong->frame.x;
			solong->frame.cur_y = solong->player.y
				- TILE_NB_DIVIDED + solong->frame.y;
			if (!ft_out_of_boundaries(solong))
				ft_print_tile(solong);
			solong->frame.x++;
		}
		solong->frame.y++;
	}
	return (1);
}
