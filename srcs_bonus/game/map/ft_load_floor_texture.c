/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_floor_texture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:05:12 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:44:02 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_floor_texture(t_solong *solong)
{
	solong->map.floor.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->map.floor.path,
			&solong->map.floor.width, &solong->map.floor.height);
}
