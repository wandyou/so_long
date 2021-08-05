/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_collectible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:03:28 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 04:39:45 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

int	ft_is_collectible(char c)
{
	if (c == COLLECTIBLE)
		return (1);
	else
		return (0);
}
