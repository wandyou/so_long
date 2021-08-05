/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 01:27:28 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:47:51 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_move_down(t_solong *solong)
{
	solong->player.target_x = solong->player.x;
	solong->player.target_y = solong->player.y - 1;
}
