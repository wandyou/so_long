/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:08:02 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 04:42:54 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

int	ft_is_floor(char c)
{
	if (c == FLOOR)
		return (1);
	else
		return (0);
}

int	ft_is_wall(char c)
{
	if (c == WALL)
		return (1);
	else
		return (0);
}

int	ft_is_map(char c)
{
	if (ft_is_wall(c) || ft_is_floor(c))
		return (1);
	else
		return (0);
}
