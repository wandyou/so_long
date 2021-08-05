/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:25:55 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 05:35:49 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_parser_errors(t_solong *solong)
{
	if (!solong->player.nb)
		ft_error(ft_clean(solong), "No player on map...");
	if (!solong->exit.nb)
		ft_error(ft_clean(solong), "No exit on map ...");
	if (!solong->collectible.nb)
		ft_error(ft_clean(solong), "No collectible on map ...");
}

void	ft_parser(t_solong *solong)
{
	int	ret;

	ret = 1;
	while (ret == 1)
	{
		solong->file.line = 0;
		solong->file.line_cur = 0;
		ret = get_next_line(solong->file.fd, &solong->file.line);
		if (solong->file.line[0] == '\0')
		{
			free(solong->file.line);
			solong->file.line = 0;
			ft_error(ft_clean(solong), "File error");
		}
		solong->map.y++;
		ft_parse_line(solong, ret);
		free(solong->file.line);
		solong->file.line = 0;
	}
	close(solong->file.fd);
	ft_parser_errors(solong);
}
