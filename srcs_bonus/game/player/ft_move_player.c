/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 04:14:58 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 05:29:55 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_swap_player(t_solong *solong)
{
	solong->map.map[solong->player.y][solong->player.x] = FLOOR;
	solong->player.x = solong->player.target_x;
	solong->player.y = solong->player.target_y;
	solong->map.map[solong->player.y][solong->player.x] = PLAYER;
	solong->player.moves++;
}

void	ft_move_player(t_solong *solong)
{
	int	tmp_y;
	int	tmp_x;

	tmp_y = solong->player.target_y;
	tmp_x = solong->player.target_x;
	if (ft_is_floor(solong->map.map[tmp_y][tmp_x]))
		ft_swap_player(solong);
	else if (ft_is_collectible(solong->map.map[tmp_y][tmp_x]))
	{
		solong->player.pts++;
		ft_swap_player(solong);
	}
	else if (ft_is_exit(solong->map.map[tmp_y][tmp_x]))
	{
		if (solong->player.pts == solong->collectible.nb)
		{
			solong->player.moves++;
			ft_exit_game(ft_clean(solong), solong);
		}
	}
	else if (ft_is_enemy(solong->map.map[tmp_y][tmp_x]))
		ft_error(ft_clean(solong), "You touched a bomb");
	printf("Moves : %ld\n", solong->player.moves);
	mlx_clear_window(solong->mlx.mlx, solong->mlx.win);
}
