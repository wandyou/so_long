/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_collectible_texture.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:51:51 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:39:01 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_collectible_texture(t_solong *solong)
{
	solong->collectible.texture.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->collectible.texture.path,
			&solong->collectible.texture.width,
			&solong->collectible.texture.height);
}
