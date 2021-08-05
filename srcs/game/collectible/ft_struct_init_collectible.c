/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_collectible.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:04:17 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 08:08:02 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_collectible(t_collectible *collectible)
{
	collectible->nb = 0;
	collectible->texture.path = COLLECTIBLE_TEXTURE_PATH;
	collectible->texture.img = NULL;
}
