/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_player.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:39:31 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 08:08:23 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_player(t_player *player)
{
	player->nb = 0;
	player->texture.path = PLAYER_TEXTURE_PATH;
	player->texture.img = NULL;
	player->pts = 0;
	player->moves = 0;
	player->x = 0;
	player->y = 0;
	player->target_x = 0;
	player->target_y = 0;
}
