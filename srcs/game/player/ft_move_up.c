/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 01:24:42 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 04:48:31 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_move_up(t_solong *solong)
{
	solong->player.target_x = solong->player.x;
	solong->player.target_y = solong->player.y + 1;
}
