/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_enemy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 03:59:40 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 04:05:26 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_enemy(t_enemy *enemy)
{
	enemy->nb = 0;
	enemy->x = 0;
	enemy->y = 0;
	enemy->target_x = 0;
	enemy->target_y = 0;
	enemy->texture.path = ENEMY_TEXTURE_PATH;
	enemy->texture.img = NULL;
}
