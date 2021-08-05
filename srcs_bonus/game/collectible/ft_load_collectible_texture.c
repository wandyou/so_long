/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_collectible_texture.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:51:51 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/04 12:38:10 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_collectible_texture(t_solong *solong)
{
	solong->collectible.texture.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->collectible.texture.path,
			&solong->collectible.texture.width,
			&solong->collectible.texture.height);
	solong->collectible.texture2.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->collectible.texture2.path,
			&solong->collectible.texture2.width,
			&solong->collectible.texture2.height);
	solong->collectible.texture3.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->collectible.texture3.path,
			&solong->collectible.texture3.width,
			&solong->collectible.texture3.height);
	solong->collectible.texture4.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->collectible.texture4.path,
			&solong->collectible.texture4.width,
			&solong->collectible.texture4.height);
}
