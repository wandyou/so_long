/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:24:01 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/05 04:49:43 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_load_map_line(t_solong *solong)
{
	solong->map.map[solong->map.line] = malloc(sizeof(char *) * solong->map.x);
	if (!solong->map.map[solong->map.line])
		ft_error(ft_clean(solong), "An error occured during malloc");
	ft_strlcpy(solong->map.map[solong->map.line],
		solong->file.line, solong->map.x + 1);
}

void	ft_load_map(t_solong *solong)
{
	int	ret;

	ret = 1;
	solong->file.line = 0;
	solong->file.fd = open(solong->file.name, O_RDONLY);
	if (solong->file.fd == -1)
		ft_error(ft_clean(solong), "Problem during second file reading");
	solong->map.map = malloc(sizeof(char *) * solong->map.y);
	if (!solong->map.map)
		ft_error(ft_clean(solong), "Problem during map line malloc");
	while (ret == 1)
	{
		solong->file.line_cur = 0;
		ret = get_next_line(solong->file.fd, &solong->file.line);
		ft_load_map_line(solong);
		solong->map.line++;
		free(solong->file.line);
		solong->file.line = 0;
	}
	close(solong->file.fd);
}
