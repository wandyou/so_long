/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 01:27:49 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:47:54 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_move_left(t_solong *solong)
{
	solong->player.target_x = solong->player.x - 1;
	solong->player.target_y = solong->player.y;
}
