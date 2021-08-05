/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 01:09:03 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 11:58:22 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exit_game(int clean_success, t_solong *solong)
{
	if (!clean_success)
		printf("An error occured during cleaning process ...\n");
	else if (solong->player.pts == solong->collectible.nb)
		printf("You won ! With only %zu mouvements !\n", solong->player.moves);
	else
		printf("You lost ....\n");
	exit(EXIT_SUCCESS);
}
