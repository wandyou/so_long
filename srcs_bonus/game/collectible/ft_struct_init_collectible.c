/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_collectible.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:04:17 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/04 12:38:46 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_collectible(t_collectible *collectible)
{
	collectible->nb = 0;
	collectible->texture.path = COLLECTIBLE_TEXTURE_PATH;
	collectible->texture2.path = COLLECTIBLE_TEXTURE_PATH_2;
	collectible->texture3.path = COLLECTIBLE_TEXTURE_PATH_3;
	collectible->texture4.path = COLLECTIBLE_TEXTURE_PATH_4;
	collectible->texture.img = NULL;
	collectible->texture2.img = NULL;
	collectible->texture3.img = NULL;
	collectible->texture4.img = NULL;
}
