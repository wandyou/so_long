/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specials.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:25:48 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:37:17 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_parse_specials(t_solong *solong)
{
	if (ft_is_player(solong->file.line[solong->file.line_cur]))
	{
		solong->player.nb++;
		solong->player.x = solong->file.line_cur;
		solong->player.y = solong->map.y - 1;
	}
	else if (ft_is_exit(solong->file.line[solong->file.line_cur]))
		solong->exit.nb++;
	else if (ft_is_collectible(solong->file.line[solong->file.line_cur]))
		solong->collectible.nb++;
	else if (!ft_is_map(solong->file.line[solong->file.line_cur]))
		ft_error(ft_clean(solong), "Bad char on map ...");
}
