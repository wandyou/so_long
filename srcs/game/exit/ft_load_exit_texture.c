/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_exit_texture.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:56:02 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:40:29 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_exit_texture(t_solong *solong)
{
	solong->exit.texture.img = mlx_xpm_file_to_image(solong->mlx.mlx,
			solong->exit.texture.path,
			&solong->exit.texture.width, &solong->exit.texture.height);
}
