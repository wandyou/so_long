/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 09:01:05 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:30:07 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_solong	solong;
	char		*extension;

	if (argc < 2)
		ft_error(1, "Missing arguments ...");
	if (argc > 2)
		ft_error(1, "Too much arguments ...");
	extension = ft_strstr(argv[1], ".ber");
	if (!extension || ft_strcmp(extension, ".ber") != 0)
		ft_error(1, "File extension is incorrect ...");
	ft_struct_init(&solong);
	solong.file.name = argv[1];
	solong.file.fd = open(solong.file.name, O_RDONLY);
	if (solong.file.fd == -1)
		ft_error(ft_clean(&solong), "Failed to open file ...");
	ft_parser(&solong);
	ft_load_map(&solong);
	ft_game(&solong);
	return (0);
}
