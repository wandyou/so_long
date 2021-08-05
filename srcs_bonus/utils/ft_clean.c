/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:53:26 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:48:53 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_clean_textures(t_solong *solong)
{
	if (solong->map.wall.img)
		mlx_destroy_image(solong->mlx.mlx, solong->map.wall.img);
	if (solong->exit.texture.img)
		mlx_destroy_image(solong->mlx.mlx, solong->exit.texture.img);
	if (solong->player.texture.img)
		mlx_destroy_image(solong->mlx.mlx, solong->player.texture.img);
	if (solong->collectible.texture.img)
		mlx_destroy_image(solong->mlx.mlx, solong->collectible.texture.img);
	if (solong->collectible.texture2.img)
		mlx_destroy_image(solong->mlx.mlx, solong->collectible.texture2.img);
	if (solong->collectible.texture3.img)
		mlx_destroy_image(solong->mlx.mlx, solong->collectible.texture3.img);
	if (solong->collectible.texture4.img)
		mlx_destroy_image(solong->mlx.mlx, solong->collectible.texture4.img);
	if (solong->enemy.texture.img)
		mlx_destroy_image(solong->mlx.mlx, solong->enemy.texture.img);
	if (solong->map.floor.img)
		mlx_destroy_image(solong->mlx.mlx, solong->map.floor.img);
	return (1);
}

int	ft_clean_mlx(t_solong *solong)
{
	if (solong->img.img)
		mlx_destroy_image(solong->mlx.mlx, solong->img.img);
	if (solong->mlx.win)
		mlx_destroy_window(solong->mlx.mlx, solong->mlx.win);
	if (solong->mlx.mlx)
	{
		mlx_destroy_display(solong->mlx.mlx);
		free(solong->mlx.mlx);
	}
	solong->mlx.win = NULL;
	return (1);
}

int	ft_clean_map(t_solong *solong)
{
	int	i;

	if (solong->map.map)
	{
		i = solong->map.y - 1;
		while (i >= 0)
		{
			free(solong->map.map[i]);
			i--;
		}
		free(solong->map.map);
	}
	return (1);
}

int	ft_clean(t_solong *solong)
{
	if (solong->file.line != NULL)
		free(solong->file.line);
	if (!ft_clean_textures(solong))
		return (0);
	if (!ft_clean_mlx(solong))
		return (0);
	if (!ft_clean_map(solong))
		return (0);
	return (1);
}
