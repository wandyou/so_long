/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 04:10:14 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 04:09:35 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_exit(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->exit.texture.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}
