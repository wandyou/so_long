/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_collectible.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 04:09:31 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/04 12:37:16 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_print_collectible_1(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->collectible.texture.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}

void	ft_print_collectible_2(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->collectible.texture2.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}

void	ft_print_collectible_3(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->collectible.texture3.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}

void	ft_print_collectible_4(t_solong *solong)
{
	mlx_put_image_to_window(solong->mlx.mlx, solong->mlx.win,
		solong->collectible.texture4.img,
		TEXTURE_SIZE * solong->frame.x, TEXTURE_SIZE * solong->frame.y);
}

void	ft_print_collectible(t_solong *solong)
{
	if (solong->frame.frame == 0)
		ft_print_collectible_1(solong);
	else if (solong->frame.frame == 1)
		ft_print_collectible_2(solong);
	else if (solong->frame.frame == 2)
		ft_print_collectible_3(solong);
	else if (solong->frame.frame == 3)
		ft_print_collectible_4(solong);
}
