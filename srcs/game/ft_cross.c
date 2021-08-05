/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 02:37:28 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/03 14:20:03 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_cross(t_solong *solong)
{
	ft_clean(solong);
	printf("You lost ...\n");
	exit(EXIT_SUCCESS);
}
