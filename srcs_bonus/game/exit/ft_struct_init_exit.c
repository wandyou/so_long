/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_exit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:52:02 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 09:27:32 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_struct_init_exit(t_exit *exit)
{
	exit->nb = 0;
	exit->texture.path = EXIT_TEXTURE_PATH;
	exit->texture.img = NULL;
}
