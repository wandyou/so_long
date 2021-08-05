/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_collectible.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 04:09:31 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 09:59:13 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_collectible(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->collectible.texture.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}
