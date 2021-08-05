/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 04:00:01 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 04:08:50 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_swap_enemy(t_solong *solong)
{
	if (ft_is_floor(solong->map.map[solong->enemy.target_y]
			[solong->enemy.target_x]))
	{
		solong->map.map[solong->enemy.y]
		[solong->enemy.x] = FLOOR;
		solong->map.map[solong->enemy.target_y]
		[solong->enemy.target_x] = ENEMY;
	}
	else if (ft_is_player(solong->map.map[solong->enemy.target_y]
			[solong->enemy.target_x]))
	{
		ft_error(ft_clean(solong), "A bomb touched you ...");
	}
}

void	ft_new_enemy_position(t_solong *solong)
{
	solong->enemy.target_x = solong->enemy.x;
	solong->enemy.target_y = solong->enemy.y;
	if (solong->frame.frame == 0 || solong->frame.frame == 1)
	{
		solong->enemy.target_x++;
		ft_swap_enemy(solong);
	}
	else if (solong->frame.frame == 2 || solong->frame.frame == 3)
	{
		solong->enemy.target_x--;
		ft_swap_enemy(solong);
	}
}

void	ft_offset_loop(t_solong *solong, size_t *x)
{
	if (solong->frame.frame == 0 || solong->frame.frame == 1)
		++(*x);
}

void	ft_move_enemy(t_solong *solong)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (y < solong->map.y)
	{
		x = 0;
		while (x < solong->map.x)
		{
			if (ft_is_enemy(solong->map.map[y][x]))
			{
				solong->enemy.x = x;
				solong->enemy.y = y;
				ft_offset_loop(solong, &x);
				ft_new_enemy_position(solong);
			}
			++x;
		}
		y++;
	}
}
