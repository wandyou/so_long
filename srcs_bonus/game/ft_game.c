/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:21:02 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/04 13:08:18 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_load_textures(t_solong *solong)
{
	ft_load_wall_texture(solong);
	ft_load_floor_texture(solong);
	ft_load_player_texture(solong);
	ft_load_collectible_texture(solong);
	ft_load_enemy_texture(solong);
	ft_load_exit_texture(solong);
}

void	ft_game(t_solong *solong)
{
	solong->mlx.mlx = mlx_init();
	solong->mlx.win = mlx_new_window(solong->mlx.mlx,
			TILE_NB * TEXTURE_SIZE, TILE_NB * TEXTURE_SIZE, "so_long");
	solong->img.img = mlx_new_image(solong->mlx.mlx,
			TILE_NB * TEXTURE_SIZE, TILE_NB * TEXTURE_SIZE);
	solong->img.addr = mlx_get_data_addr(solong->img.img,
			&solong->img.bits_per_pixel,
			&solong->img.line_length, &solong->img.endian);
	ft_load_textures(solong);
	mlx_key_hook(solong->mlx.win, ft_keypress, solong);
	mlx_hook(solong->mlx.win, 33, (1L << 17), ft_cross, solong);
	mlx_loop_hook(solong->mlx.mlx, ft_frame, solong);
	mlx_loop(solong->mlx.mlx);
	mlx_destroy_display(solong->mlx.mlx);
	free(solong->mlx.mlx);
}
