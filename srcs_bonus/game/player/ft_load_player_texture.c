/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_player_texture.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:48:59 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:49:54 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_player_texture(t_solong *solong)
{
	solong->player.texture.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->player.texture.path,
			&solong->player.texture.width, &solong->player.texture.height);
}
