/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_ends.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:28:12 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 08:11:01 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_parse_ends(t_solong *solong)
{
	while (solong->file.line[solong->file.line_cur] != '\0')
	{
		if (solong->file.line[solong->file.line_cur] != WALL)
			ft_error(ft_clean(solong), "A wall is incorrect");
		solong->file.line_cur++;
	}
	solong->map.x = solong->file.line_cur;
}
