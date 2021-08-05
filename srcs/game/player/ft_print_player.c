/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_player.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 04:06:41 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 10:02:37 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_player(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->player.texture.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}
