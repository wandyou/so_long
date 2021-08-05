/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:52:24 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 14:58:55 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_struct_init_file(t_file *file)
{
	file->name = "";
	file->fd = 0;
	file->line = 0;
	file->line_cur = 0;
}

void	ft_struct_init_frame(t_frame *frame)
{
	frame->x = 0;
	frame->y = 0;
	frame->cur_x = 0;
	frame->cur_y = 0;
}

void	ft_struct_init_mlx(t_mlx *mlx)
{
	mlx->mlx = NULL;
	mlx->win = NULL;
}

void	ft_struct_init(t_solong *solong)
{
	ft_struct_init_file(&solong->file);
	ft_struct_init_map(&solong->map);
	ft_struct_init_player(&solong->player);
	ft_struct_init_exit(&solong->exit);
	ft_struct_init_collectible(&solong->collectible);
	ft_struct_init_frame(&solong->frame);
	ft_struct_init_mlx(&solong->mlx);
	solong->img.img = NULL;
}
