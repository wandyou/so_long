/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:56:12 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:05:08 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_out_of_boundaries(t_solong *solong)
{
	if (solong->frame.cur_x < 0
		|| solong->frame.cur_x > (int)solong->map.x - 1
		|| solong->frame.cur_y < 0
		|| solong->frame.cur_y > (int)solong->map.y - 1)
		return (1);
	else
		return (0);
}

void	ft_print_tile(t_solong *solong)
{
	char	tile;

	tile = solong->map.map[solong->frame.cur_y]
	[solong->frame.cur_x];
	if (ft_is_map(tile))
		ft_print_map(solong);
	else if (ft_is_player(tile))
		ft_print_player(solong);
	else if (ft_is_collectible(tile))
		ft_print_collectible(solong);
	else if (ft_is_enemy(tile))
		ft_print_enemy(solong);
	else if (ft_is_exit(tile))
		ft_print_exit(solong);
	else
		ft_print_exit(solong);
}

void	ft_loop_count(t_solong *solong)
{
	solong->frame.loop++;
	if (solong->frame.loop == FPS)
	{
		solong->frame.frame++;
		if (solong->frame.frame == 4)
			solong->frame.frame = 0;
		solong->frame.loop = 0;
		ft_move_enemy(solong);
	}
}

int	ft_frame(t_solong *solong)
{
	char	*score;

	solong->frame.y = 0;
	while (solong->frame.y < 15)
	{
		solong->frame.x = 0;
		while (solong->frame.x < 15)
		{
			solong->frame.cur_x
				= solong->player.x - TILE_NB_DIVIDED + solong->frame.x;
			solong->frame.cur_y
				= solong->player.y - TILE_NB_DIVIDED + solong->frame.y;
			if (!ft_out_of_boundaries(solong))
				ft_print_tile(solong);
			solong->frame.x++;
		}
		solong->frame.y++;
	}
	ft_loop_count(solong);
	score = ft_itoa(solong->player.moves);
	mlx_string_put(solong->mlx.mlx,
		solong->mlx.win, 50, 50,
		create_trgb(0, 255, 255, 255), score);
	free(score);
	return (1);
}
