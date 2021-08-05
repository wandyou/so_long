/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keypress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 04:17:24 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 05:57:29 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_keypress(int keycode, t_solong *solong)
{
	if (keycode == ESC_KEY)
		ft_exit_game(ft_clean(solong), solong);
	else if (keycode == Z_KEY)
		ft_move_up(solong);
	else if (keycode == Q_KEY)
		ft_move_left(solong);
	else if (keycode == S_KEY)
		ft_move_down(solong);
	else if (keycode == D_KEY)
		ft_move_right(solong);
	ft_move_player(solong);
	return (0);
}
