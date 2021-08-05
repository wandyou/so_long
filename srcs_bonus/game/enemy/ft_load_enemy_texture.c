/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_enemy_texture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:01:20 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:07:29 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_enemy_texture(t_solong *solong)
{
	solong->enemy.texture.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->enemy.texture.path,
			&solong->enemy.texture.width,
			&solong->enemy.texture.height);
}
