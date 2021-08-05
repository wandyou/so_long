/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_middle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:58:46 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:55:57 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_parse_middle(t_solong *solong)
{
	if (ft_strlen(solong->file.line) != solong->map.x)
		ft_error(ft_clean(solong), "The map is not a rectangle ...");
	while (solong->file.line[solong->file.line_cur] != '\0')
	{
		if (solong->file.line_cur == 0
			|| solong->file.line_cur == solong->map.x - 1)
		{
			if (solong->file.line[solong->file.line_cur] != WALL)
				ft_error(ft_clean(solong), "The map has a wall error ...");
		}
		ft_parse_specials(solong);
		solong->file.line_cur++;
	}
}
