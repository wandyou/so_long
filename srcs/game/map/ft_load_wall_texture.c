/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_wall_texture.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 22:52:41 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:43:37 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_wall_texture(t_solong *solong)
{
	solong->map.wall.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->map.wall.path,
			&solong->map.wall.width, &solong->map.wall.height);
}
